// Demonstriert den Unterschied zwischen Argumenten und Paramentern

#include<stdio.h>
#include<stdlib.h>

float haelfte(float);

int main(int argc, char *argv[]){
    float x = 3.5, y = 65.11;
    float z;
    // x ist hier das argument zu haelfte();
    z = haelfte(x);

    printf("Hier ist die Hälfte von x = %f\n", z);

    // y ist hier das argument zu haelfte();
    z = haelfte(y);
    printf("Hier ist die Hälfte von x = %f\n", z);


    return EXIT_SUCCESS;
}
// hier ist k ein parameter von haelfte
float haelfte(float k){
    return (k / 2);
}