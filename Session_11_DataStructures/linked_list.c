#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory full!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertHead(Node **head, int value) {
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void insertTail(Node **head, int value) {
    Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node *curr = *head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode;
}

void deleteNode(Node **head, int value) {
    if (*head == NULL) return;
    Node *curr = *head;
    Node *prev = NULL;

    if (curr->data == value) {
        *head = curr->next;
        free(curr);
        return;
    }

    while (curr != NULL && curr->data != value) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) return; // Value not found

    prev->next = curr->next;
    free(curr);
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        printf("[%d] -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

void freeList(Node **head) {
    Node *curr = *head;
    Node *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }
    *head = NULL;
}

int main() {
    Node *head = NULL;

    printf("--- Singly Linked List Operations ---\n");
    insertHead(&head, 20);
    insertHead(&head, 10);
    insertTail(&head, 30);
    printList(head); // [10] -> [20] -> [30] -> NULL

    deleteNode(&head, 20);
    printList(head); // [10] -> [30] -> NULL

    freeList(&head);
    return 0;
}
