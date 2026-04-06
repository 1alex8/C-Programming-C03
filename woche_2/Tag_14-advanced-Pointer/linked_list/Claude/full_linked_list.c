#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* createNode(int value) {
    Node *n = (Node*) malloc(sizeof(Node));
    n->data  = value;
    n->next  = NULL;
    return n;
}

void prepend(Node **head, int value) {
    Node *n  = createNode(value);
    n->next  = *head;
    *head    = n;
}

void append(Node **head, int value) {
    Node *n = createNode(value);
    if (!*head) { *head = n; return; }
    Node *cur = *head;
    while (cur->next) cur = cur->next;
    cur->next = n;
}

void deleteNode(Node **head, int value) {
    Node *cur = *head, *prev = NULL;
    while (cur && cur->data != value) {
        prev = cur; cur = cur->next;
    }
    if (!cur) return;
    if (!prev) *head = cur->next;
    else        prev->next = cur->next;
    free(cur);
}

void printList(Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// WICHTIG: Speicher vollständig freigeben
void freeList(Node *head) {
    Node *tmp;
    while (head) {
        tmp  = head->next;
        free(head);
        head = tmp;
    }
}

int main() {
    Node *head = NULL;

    append(&head, 17);
    append(&head, 93);
    prepend(&head, 42);     // 42 -> 17 -> 93 -> NULL
    printList(head);

    deleteNode(&head, 17);  // 42 -> 93 -> NULL
    printList(head);

    freeList(head);
    return 0;
}