#include <stdio.h>
#include <stdlib.h>

// 1. Define the Node structure
typedef struct Node {
    int data;           // The payload of the node
    struct Node *next;  // Pointer to the next node in the list
} Node;

// Helper: Create a new node on the heap
Node *createNewNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Out of memory! Cannot create node.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// 2. Insert node at the front (Head) of the list
// We pass a double pointer (Node **) because we want to modify the actual head pointer in main()
void insertHead(Node **head, int value) {
    Node *newNode = createNewNode(value);
    newNode->next = *head; // New node points to the old head
    *head = newNode;       // Update head to point to the new node
    printf("Inserted %d at HEAD.\n", value);
}

// 3. Insert node at the end (Tail) of the list
void insertTail(Node **head, int value) {
    Node *newNode = createNewNode(value);

    // Case: If the list is empty, make this node the head
    if (*head == NULL) {
        *head = newNode;
        printf("List was empty. Inserted %d as HEAD.\n", value);
        return;
    }

    // Traverse to the last node
    Node *curr = *head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode; // Last node points to new node
    printf("Inserted %d at TAIL.\n", value);
}

// 4. Print list contents
void printList(Node *head) {
    printf("List Path: ");
    if (head == NULL) {
        printf("[EMPTY]\n");
        return;
    }

    Node *curr = head;
    while (curr != NULL) {
        printf("[%d] -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

// 5. Delete first node with matching value
void deleteNode(Node **head, int value) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete %d.\n", value);
        return;
    }

    Node *curr = *head;
    Node *prev = NULL;

    // Case A: If head node holds the value
    if (curr->data == value) {
        *head = curr->next; // Change head to next node
        free(curr);         // Free memory of original head
        printf("Deleted %d from list.\n", value);
        return;
    }

    // Case B: Search for node to delete
    while (curr != NULL && curr->data != value) {
        prev = curr;
        curr = curr->next;
    }

    // If value was not found
    if (curr == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    // Unlink the node from the list
    prev->next = curr->next;
    free(curr); // Free heap node
    printf("Deleted %d from list.\n", value);
}

// 6. Clean up: Free the entire list when program exits
void freeList(Node **head) {
    Node *curr = *head;
    Node *next_node = NULL;

    while (curr != NULL) {
        next_node = curr->next;
        free(curr); // Free node
        curr = next_node;
    }
    *head = NULL; // Reset original pointer to avoid dangling reference
    printf("Free'd entire list memory.\n");
}

int main() {
    // Start with an empty list
    Node *head = NULL;

    printf("--- Singly Linked List Demo ---\n");
    printList(head);

    // Insert elements
    insertHead(&head, 20); // List: [20]
    insertHead(&head, 10); // List: [10] -> [20]
    insertTail(&head, 30); // List: [10] -> [20] -> [30]
    insertTail(&head, 40); // List: [10] -> [20] -> [30] -> [40]

    printList(head);

    // Delete node
    deleteNode(&head, 20); // Delete mid element
    printList(head);

    deleteNode(&head, 10); // Delete head element
    printList(head);

    deleteNode(&head, 99); // Non-existent element

    // Always free before exiting!
    freeList(&head);
    printList(head);

    return 0;
}
