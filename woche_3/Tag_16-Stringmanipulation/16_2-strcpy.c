/*
strcpy(); kopiert String inclusive '\0' in die destination
Achtung : von kopieren muss destination speicher via Malloc reserviert werden, sonst segFault

Prototyp: char *strcpy(char *destination, char *source);
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char quelle[] = "Der Quellstring";

    char ziel1[80];
    char *ziel2, *ziel3;

    printf("\nQuelle: %s\n", quelle);

    //Kopieren in Ziel 1 OK, weil ziel1 auf einen 80 Byte großen RESERVIERTEN Speicher zeigt.
    strcpy(ziel1, quelle);
    printf("\n Ziel1: %s", ziel1);

    //Um in ziel2 zu kopieren muss vorher mit malloc speicher reserviert werden.
    ziel2 = (char *)malloc(strlen(quelle) + 1); // muss gemacht werden weil strlen den '\0' nicht zählt
    strcpy(ziel2, quelle);
    printf("\n Ziel2: %s", ziel2);
    free(ziel2);

    /*
    Nicht kopieren, ohne Speicher für den Zielstring zu reservieren,
    Der Nachfolgende Code kann schwerwiegende Fehler verursachen.

    strcpy(ziel3, quelle);
    */

    return 0;
}