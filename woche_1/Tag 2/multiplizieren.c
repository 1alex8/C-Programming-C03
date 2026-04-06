#include <stdio.h>

float multiply(float, float);

int main (void){
    float a, b, c;

    printf("Wert für Zahl a: "); scanf("%f", &a);
    printf("Wert für Zahl b: "); scanf("%f", &b);

    c = multiply(a, b);

    printf("A * B = %.2f * %.2f = %.2f\n", a, b, c);

    return 0;
}

float multiply(float x, float y){
    return (x * y);
}