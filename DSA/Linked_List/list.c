/**
 * @file list.c
 * @brief Implementation of the linked list API declared in list.h.
 */

#include "list.h"

/* ============================================================
 *                  CORE LIST FUNCTIONS
 * ============================================================ */

void init(LinkedList *list)
{
    list->head = NULL;
}

int isEmpty(LinkedList *list)
{
    return (list->head) == NULL;
}

ErrorCode createNode(int data, Node **outNode)
{
    *outNode = (Node *)malloc(sizeof(Node));
    if (!*outNode)
        return ERR_NO_MEM;

    (*outNode)->data = data;
    (*outNode)->next = NULL;
    return ERR_OK;
}

ErrorCode insertAtBeginning(LinkedList *list, int data)
{
    Node *newNode;
    TRY(createNode(data, &newNode));
    newNode->next = list->head;
    list->head = newNode;
    return ERR_OK;
}

ErrorCode insertAtEnd(LinkedList *list, int data)
{
    Node *newNode;
    TRY(createNode(data, &newNode));

    if (isEmpty(list))
    {
        list->head = newNode;
        return ERR_OK;
    }

    Node *temp = list->head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    return ERR_OK;
}

ErrorCode deleteData(LinkedList *list, int data)
{
    if (isEmpty(list))
        return ERR_EMPTY;

    Node *temp = list->head;
    Node *prev = NULL;

    while (temp && temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }

    if (!temp)
        return ERR_NOT_FOUND;

    if (!prev)
        list->head = temp->next;
    else
        prev->next = temp->next;

    free(temp);
    return ERR_OK;
}

ErrorCode displayList(LinkedList *list)
{
    if (isEmpty(list))
    {
        printf("List is empty!\n");
        return ERR_OK;
    }

    Node *temp = list->head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return ERR_OK;
}

ErrorCode freeList(LinkedList *list)
{
    Node *temp = list->head;

    while (temp)
    {
        Node *next = temp->next;
        free(temp);
        temp = next;
    }
    list->head = NULL;
    return ERR_OK;
}

/* ============================================================
 *                  ERROR HANDLER
 * ============================================================ */

void handleError(ErrorCode code)
{
    switch (code)
    {
    case ERR_NO_MEM:
        printf("Memory allocation failed!\n");
        break;

    case ERR_EMPTY:
        printf("List is empty!\n");
        break;

    case ERR_NOT_FOUND:
        printf("Data not found in the list!\n");
        break;

    default:
        break;
    }
}