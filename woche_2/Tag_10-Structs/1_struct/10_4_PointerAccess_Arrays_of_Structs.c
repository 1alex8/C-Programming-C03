/*
Beispiel für den Durchlauf einnes Arrays von Strukturen
mit Hilfe der Zeigernotation
*/

#include <stdio.h>

#define MAX 4

//Definiert eine Struktur und deklariert und intitialisiert

struct teil{
    int zahl;
    char name[10];
}daten[MAX] = {{1, "Schmid"}, {2, "Mack"}, {3, "Kopp"}, {4, "Meier"}};

struct teil *z_teil;


int main(int argc, char *argv[]){
    // Initialisiert den Zeiger mit dem ersten Array Element
    z_teil = daten;
    printf("\n");

    //durchläuft den Array  und inkrementiert den Zeiger: 

    for (int i = 0; i < MAX; i++){
        printf("An Adrese %p: %d, %s\n", z_teil, z_teil->zahl, (*z_teil).name); // Alles das selbe benötigt man wenn man mit einem pointer auf einen Array of structs zu greift.
        z_teil++;
    }

    return 0;
}