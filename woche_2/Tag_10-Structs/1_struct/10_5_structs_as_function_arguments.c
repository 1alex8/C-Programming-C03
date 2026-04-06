/*
Beispiel für die Übergabe einer Struktur als Argument.
*/

#include <stdio.h>

// Deklariert und definiert eine Struktur zur Aufnahme der Daten.

struct daten{
    float betrag;
    char vname[30];
    char nname[30];
} rec;

/*  Der Funktionsprototyp. Die Frunktion hat keinen Rückgabewert
    und übernimmt eine Struktur vom Typ daten als einziges Argument
*/
void ausgabe(struct daten);

int main(int argc, char *argv[]){

    // Eingabe der Daten über die Tastatur.

    printf("Geben Sie den Vor- und Nachnamen des Spenders ein: ");
    scanf("%s%s", rec.vname, rec.nname);

    printf("Geben Sie die Höhe der Spende in € ein: ");
    scanf("%f", &rec.betrag);

    // Aufruf der Funktion zur Ausgabe.
    ausgabe(rec);

    return 0;
}

void ausgabe(struct daten x){
    printf("Spender: %s %s\t%.2f€", x.vname, x.vname, x.betrag);
}