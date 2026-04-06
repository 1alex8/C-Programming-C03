/*
    Malloc
*/

#include <stdio.h>
#include <stdlib.h> // für malloc() und free() benötigt.

int main(int argc, char *argv[]){

    char *zgr, *z;

    //Reserviert einen Block von 35 Bytes und testet auf Erfolg:
    zgr = malloc(35 * sizeof(char));
    if(zgr == NULL){
        puts("Fehler bei Speicherzuweisung");
        return 1;
    }

    /*
    Füllt den String mit den Werten von 65 bis 90.
    was den ASCII-Code für A-Z entspricht
    */

    /*
    z ist  ein Zeiger, mit dem der String durchlaufen wird.
    zgr soll weiterhin auf den Anfang des Strings zeigen.
    */

    z = zgr;

    for(int i = 65; i < 91; i++){
        *z++ = i;
    }

    // fügt das Anschließende Nullzeichen ein:
    *z = '\0';

    puts(zgr);
    printf("\n%s", zgr);// %s erwartet einen Zeiger zu String deshalb kein * derefrencing operator
    free(zgr); // Immer free nutzen bei malloc()

    return 0;
}