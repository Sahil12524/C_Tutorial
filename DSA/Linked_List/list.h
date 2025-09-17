/**
 * @file list.h
 * @brief Header file for a simple singly linked list implementation in C.
 *
 * This module defines the data structures, error codes, and API functions
 * for managing a generic singly linked list of integers. It also provides
 * a unified error handling mechanism via macros for clean, consistent code.
 *
 * Author: Sahil Bhandari
 * License: MIT
 */

#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/* ============================================================
 *                  ERROR HANDLING SYSTEM
 * ============================================================ */

/**
 * @enum ErrorCode
 * @brief Represents possible outcomes of linked list operations.
 */
typedef enum
{
    ERR_OK = 0,   /**< Operation completed successfully */
    ERR_NO_MEM,   /**< Memory allocation failed */
    ERR_EMPTY,    /**< Operation on an empty list */
    ERR_NOT_FOUND /**< Requested element not found */
} ErrorCode;

/**
 * @brief Prints an error message for the given error code.
 * @param code The error code to handle.
 */
void handleError(ErrorCode code);

/**
 * EXIT_ON_ERROR:
 *   Controls whether the program aborts on the first error.
 *   - EXIT_ON_ERROR_ENABLED  (1) → Exit immediately when error occurs.
 *   - EXIT_ON_ERROR_DISABLED (0) → Log the error and continue execution.
 *
 * Default: EXIT_ON_ERROR_DISABLED (safe for demos)
 */
#define EXIT_ON_ERROR_ENABLED 1
#define EXIT_ON_ERROR_DISABLED 0

/**
 * @def EXIT_ON_ERROR
 * @brief Determines whether program should terminate on error.
 * Set to 1 to abort execution, 0 to continue after error reporting.
 */
#ifndef EXIT_ON_ERROR
#define EXIT_ON_ERROR EXIT_ON_ERROR_DISABLED
#endif

/**
 * @def TRY(expr)
 * @brief Wraps a function call and handles errors automatically.
 *
 * Example:
 * @code
 * TRY(insertAtBeginning(&list, 10));
 * @endcode
 */
#define TRY(expr)                \
    do                           \
    {                            \
        ErrorCode _err = (expr); \
        if (_err != ERR_OK)      \
        {                        \
            handleError(_err);   \
            if (EXIT_ON_ERROR)   \
                exit(_err);      \
        }                        \
    } while (0)

/* ============================================================
 *                  LINKED LIST STRUCTURES
 * ============================================================ */

/**
 * @struct Node
 * @brief Represents a single node in the linked list.
 */
typedef struct Node
{
    struct Node *next; /**< Pointer to the next node */
    int data;          /**< Integer value stored in this node */
} Node;

/**
 * @struct LinkedList
 * @brief Represents the linked list itself, holding a reference to its head.
 */
typedef struct
{
    Node *head; /**< Pointer to the first node of the list */
} LinkedList;

/* ============================================================
 *                  LINKED LIST API FUNCTIONS
 * ============================================================ */

/**
 * @brief Initializes a new linked list.
 * @param list Pointer to the linked list.
 */
void init(LinkedList *list);

/**
 * @brief Checks whether a list is empty.
 * @param list Pointer to the linked list.
 * @return 1 if empty, 0 otherwise.
 */
int isEmpty(LinkedList *list);

/**
 * @brief Allocates a new node with given data.
 * @param data Integer data for the node.
 * @param outNode Output pointer to the created node.
 * @return Error code (ERR_OK if successful).
 */
ErrorCode createNode(int data, Node **outNode);

/**
 * @brief Inserts a node at the beginning of the list.
 */
ErrorCode insertAtBeginning(LinkedList *list, int data);

/**
 * @brief Inserts a node at the end of the list.
 */
ErrorCode insertAtEnd(LinkedList *list, int data);

/**
 * @brief Deletes the first node containing the specified value.
 */
ErrorCode deleteData(LinkedList *list, int data);

/**
 * @brief Prints the list to stdout.
 */
ErrorCode displayList(LinkedList *list);

/**
 * @brief Frees all nodes in the list and resets it.
 */
ErrorCode freeList(LinkedList *list);

#endif /* LIST_H */