#include<stdio.h>

int main(int argc, char *argv[]){

    int a = 5, b = 6, c = 5, d = 1;
    int x;

    x = a < b || a < c && c < d;
    printf("\nOhne Klammern lautet das Ergebnis: x = %d\n", x);

    x = (a < b || a < c) && c < d;
    printf("\nMit Klammern lautet das Ergebnis: x = %d\n", x);

    return 0;
}