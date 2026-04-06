// Einfaches Pointer/Zeiger-Beispiel

#include<stdio.h>

//Deklariert eine Variable
int var = 1;

//Deklariert einen Zeiger auf einen Integer
int *ptr;

int main(int argc, char *argv[]){

    // Intitialisiert ptr als Zeiger auf var:
    ptr = &var;

    // Direkter und Indirekter Zugriff auf var:
    printf("\n\nDirekter Zugriff, var = %d", var);
    printf("\nIndirekter Zugriff, var = %d", *ptr);

    // 2 Möglichkeiten, um die Adresse von var anzuzeigen:
    printf("\n\n Die Adresse von var über Adressop: %llu", (unsigned long long)&var);
    printf("\n Die Adresse von Var über zeiger: %p", (void*)ptr);

    return 0; 
}