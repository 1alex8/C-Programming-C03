/*Demonstriert die Verwendung von Variablen und Konstanten*/
#include<stdio.h>
/*Konstanten zur Berechnung von Pfund in Gramm*/
#define lbs_in_g 500.2
/*Konstante für Beginn des nächsten Jahrzehnts definieren*/
const int ziel_Jahr = 2030;

int main(int argc, char *argv[]){

    printf("\n lbs in g: %f\n", lbs_in_g);

    int gewicht, gewichtlbs;
    int jahr, alter;

    printf("Geben Sie ihr Gewicht in Pfund ein: "); scanf("%d", &gewichtlbs);

    printf("Bitte ihr Geburtsjahr: "); scanf("%d", &jahr);

    /*Umrechnuungen durchführen:*/
    gewicht = gewichtlbs * lbs_in_g;
    alter = ziel_Jahr - jahr;

    printf("\nIhr Gewicht in Gramm ist: %d ", gewicht);
    printf("\nIm Jahr 2030 sind Sie %d Jahre alt.\n", alter);

    return 0;
}