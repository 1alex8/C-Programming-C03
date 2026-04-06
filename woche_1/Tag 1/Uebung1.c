#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define pi 3.12159

int main (void){

    float radius = 0.0;
    float flaeche = 0.0;

    printf("Geben Sie einen radius in meter ein: ");
    scanf("%f", &radius);
    flaeche = pi * pow(radius, 2);

    printf("\n\nFläche: %.2f\n", flaeche);


    return 0;
}