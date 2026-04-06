#include <stdio.h>
#include <stdlib.h>

// Struktur für einen Knoten
struct Node {
    int data;
    struct Node* next;
};

// Funktion: Neuen Knoten am Anfang einfügen
void push(struct Node** head_ref, int new_data) {
    // 1. Allokiere Speicher für den neuen Knoten
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 2. Daten einfügen
    new_node->data = new_data;

    // 3. Das 'next' des neuen Knotens auf den aktuellen 'head' zeigen lassen
    new_node->next = (*head_ref);

    // 4. Den 'head' Pointer auf den neuen Knoten verschieben
    (*head_ref) = new_node;
}

// Hilfsfunktion zum Drucken der Liste
void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d ->", node->data);
        node = node->next;
    }
    printf(" NULL\n");
}

int main() {
    struct Node* head = NULL;

    push(&head, 10);
    push(&head, 20);
    push(&head, 30);

    printf("Linked List:");
    printList(head);

    return 0;
}