/*
Argumente als Wert und als Referenz übergeben.
*/
#include<stdio.h>

void als_wert(int, int, int);
void als_ref(int *, int *, int *);

int main(int argc, char *argv[]){

    int x = 2, y = 4, z = 10;

    printf("\nAm Anfang: x = %d  y = %d z = %d\n\n", x, y, z);

    als_wert(x, y, z);

    printf("Nach dem Aufruf als Wert: x = %d  y = %d z = %d\n\n", x, y, z);

    als_ref(&x, &y, &z);

    printf("Nach dem Aufruf als Refrence: x = %d  y = %d z = %d\n\n", x, y, z);

    return 0;
}

void als_wert(int a, int b, int c){
    a = 0;
    b = 0;
    c = 0;
}

void als_ref(int *a, int *b, int *c){
    *a = 0;
    *b = 0;
    *c = 0;
}
