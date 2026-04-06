#include<stdio.h>

int main(int argc, char *argv[]){

    int multi[2][4];

    printf("\nWert von multi :    %u", multi);
    printf("\nWert von multi + 1: %u", multi +1);
    printf("\nWert von multi[1]:  %u", multi[1]);

    return 0;
}

/*
Ausgabe (sehen Sie wie sich der Wert um 16 erhöht (4*4)):
Wert von multi :    6291040
Wert von multi + 1: 6291056
Wert von multi[1]:  6291056
*/