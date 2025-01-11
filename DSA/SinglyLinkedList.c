/*
    Singly Linked List
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void addAtBeginning(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void addAtEnd(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void addAtPosition(struct Node **head, int value, int position)
{
    if (position < 1)
    {
        printf("Position must be >= 1.\n");
        return;
    }

    if (position == 1)
    {
        addAtBeginning(head, value);
        return;
    }

    struct Node *newNode = createNode(value);
    struct Node *temp = *head;

    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of bounds.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteByValue(struct Node **head, int value)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
        printf("Deleted %d.\n", value);
        return;
    }

    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value %d not found.\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted %d.\n", value);
}

void deletedAtPosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head;

    if (position == 1)
    {
        *head = temp->next;
        free(temp);
        printf("Deleted node at position %d.\n", position);
        return;
    }

    struct Node *prev = NULL;

    for (int i = 1; i < position && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position %d not found.\n", position);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted node at position %d.\n", position);
}

void search(struct Node *head, int value)
{
    struct Node *temp = head;
    int position = 1;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Value %d found at position %d.\n", value, position);
            return;
        }
        temp = temp->next;
        position++;
    }
    printf("Value %d not found.\n", value);
}

void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    addAtEnd(&head, 10);
    addAtEnd(&head, 20);
    addAtEnd(&head, 30);

    system("cls");

    printf("Linked List after adding at the end: ");
    displayList(head);

    addAtBeginning(&head, 5);
    printf("Linked List after adding at the beginning: ");
    displayList(head);

    addAtPosition(&head, 15, 3);
    printf("Linked List after adding at the position 3: ");
    displayList(head);

    deleteByValue(&head, 20);
    printf("Linked List after deleting value 20: ");
    displayList(head);

    deletedAtPosition(&head, 2);
    printf("Linked List after deleting node at position 2: ");
    displayList(head);

    search(head, 10);
    search(head, 100);
    return 0;
}