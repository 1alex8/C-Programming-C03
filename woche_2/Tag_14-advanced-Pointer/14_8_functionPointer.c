// Beispiel für Deklaration und Einsatz eines Funktionszeigers

#include <stdio.h>

//funktionsprototyp
double quadrat(double);

//zeiger deklaration
double (*p)(double);

int main(void){
    //p wird mit quadrat initialisiert
    p = quadrat;

    //quadrat wird auf 2 Unterschiedlichen Wegen aufgerufen:

    printf("%.2lf    %.2l f\n", quadrat(6.6), p(6.6));

    return 0;
}

double quadrat(double x){
    return (x*x);
}