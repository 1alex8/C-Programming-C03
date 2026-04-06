/*
Eine Struktur, die Arrays als Elemente enthält
*/

#include <stdio.h>

/*
Definiert und deklariert die Struktur für die Aufnahme der Daten
Die Struktur enhält eine Variable float und 2 Arrays vom Typ char
*/

struct daten{
    float betrag;
    char vname[30];
    char nname[30];
} rec;

int main(int argc, char *argv[]){

    printf("Geben Sie ihren Vor- und Nachnamen ein: ");
    scanf("%s%s", rec.vname, rec.nname);

    printf("Geben Sie die Höhe ihrer Spende ein: ");
    scanf("%f",&rec.betrag);

    printf("\nDer Spender %s %s gab %.2f Euro als Spende ab.", rec.vname, rec.nname, rec.betrag);

    return 0;
}