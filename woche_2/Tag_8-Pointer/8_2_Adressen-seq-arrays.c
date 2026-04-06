/*
Verdeutlicht die Beziehung zwischen Adressen 
und den Elementen von Arrays unterschiedlichen DT's
*/


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    short s[10];
    int i[10], x;
    float f[10];
    double d[10];

    printf("%18s %8s %6s %7s", "Short", "Integer", "Float", "Double");

    printf("\n=======================================================================");
    for(x = 0; x < 10; x++){
        printf("\nElement %d: %llu %llu %llu %llu", x, (unsigned long long)&s[x], (unsigned long long)&i[x], (unsigned long long)&f[x], (unsigned long long)&d[x]);
    }

    printf("\n=======================================================================");

    return EXIT_SUCCESS;
}