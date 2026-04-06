#include <stdio.h>
#include <stdlib.h>

// Definition eines Nodes
typedef struct Node {
    int data;           // Nutzlast
    struct Node *next;  // Zeiger auf den nächsten Node
} Node;

Node* createNode(int value) {
    Node *new = (Node*) malloc(sizeof(Node)); // Speicher auf dem Heap reservieren
    if (new == NULL) {
        fprintf(stderr, "malloc fehlgeschlagen\n");
        exit(1);
    }
    new->data = value;
    new->next = NULL;
    return new;
}