/*
    Beispiel für den Zugriff auf mehr als ein Unionelement zur Zeit.

    Die generelle syntax der union ist richtig nur die Nutzung,
    nur die Nutzung von mehr als einem Element ist falsch.
*/

#include<stdio.h>

int main(int argc, char *argv[]){

    union shared{
        char c;
        int i;
        long l;
        float f;
        double d;
    } geteilt;

    geteilt.c = '$';

    printf("\nchar c:   %c", geteilt.c);
    printf("\nint i:    %d", geteilt.i);
    printf("\nlong l:   %ld", geteilt.l);
    printf("\nfloat f:  %f", geteilt.f);
    printf("\ndouble d: %lf", geteilt.d);

    geteilt.d = 44.4;

    printf("\n\nchar c:   %c", geteilt.c);
    printf("\nint i:    %d", geteilt.i);
    printf("\nlong l:   %ld", geteilt.l);
    printf("\nfloat f:  %f", geteilt.f);
    printf("\ndouble d: %lf", geteilt.d);

    return 0;
}