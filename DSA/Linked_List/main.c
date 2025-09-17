/**
 * @file main.c
 * @brief Demonstration of the linked list library usage.
 */

#include "list.h"

int main()
{
    LinkedList list;
    init(&list);

    printf("=== Initial State ===\n");
    TRY(displayList(&list));

    printf("\n=== Insert at Beginning ===\n");
    TRY(insertAtBeginning(&list, 10));
    TRY(insertAtBeginning(&list, 20));
    TRY(insertAtBeginning(&list, 30));
    TRY(displayList(&list));

    printf("\n=== Insert at End ===\n");
    TRY(insertAtEnd(&list, 40));
    TRY(insertAtEnd(&list, 50));
    TRY(displayList(&list));

    printf("\n=== Delete Existing Data (20) ===\n");
    TRY(deleteData(&list, 20));
    TRY(displayList(&list));

    printf("\n=== Delete Non-Existing Data (99) ===\n");
    TRY(deleteData(&list, 99));
    TRY(displayList(&list));

    printf("\n=== Free List ===\n");
    TRY(freeList(&list));
    TRY(displayList(&list));

    return 0;
}