#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#define Konstantenname Wert {kein ;}
//#define PI 3.1415926
// heute wird eher eine globale Konstante genutzt, soll ich auch machen: 
const float PI = 3.1415926;

int main (int argc, char *argv[]){

    float flaeche, radius;

    printf("Geben sie den Radius in m ein: "); scanf("%f", &radius);

    flaeche = PI * pow(radius, 2);

    printf("Die Fläche ist: %.3f m^2", flaeche);

    return 0;
}