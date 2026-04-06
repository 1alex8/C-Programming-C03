/*
Beispiel für Zeiger auf den Typ void
*/

#include<stdio.h>
#include<stdlib.h>

void haelfte (void *, char typ);
int main(int argc, char *argv[]){

    int i = 20;
    long l = 100000;
    float f = 12.456;
    double d= 123.044444;

    printf("Anfangswerte: \n");
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%f\n", f);
    printf("%lf\n", d);

    haelfte(&i, 'i');
    haelfte(&l, 'l');
    haelfte(&f, 'f');
    haelfte(&d, 'd');

    printf("\n\n\nEndwerte: \n");
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%f\n", f);
    printf("%lf\n", d);
    

    return EXIT_SUCCESS;
}

void haelfte(void *x, char typ){
    switch (typ){
        case 'i':
            *((int *) x) /= 2;
            break;
        case 'l':
            *((long *) x) /= 2;
            break;
        case 'f':
            *((float *) x) /= 2;
            break;
        case 'd':
            *((double *) x) /= 2;
            break;
        default:
            printf("Fehler");
    }
}