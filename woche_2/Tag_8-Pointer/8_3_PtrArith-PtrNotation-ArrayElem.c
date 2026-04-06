/*
Mit Zeigern und Zeigerarithmetik auf Array Elemente zugreifen
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int main(int argc, char *argv[]){

    // Integer-Array initailisieren:
    int i_arr[MAX] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //Float-Array initialisieren:
    float f_arr[MAX] = {.0, .1, .2, .3, .4, .5, .6, .7, .8, .9};

    //Zeiger deklarieren
    int *ptrI;
    float *ptrF;

    // Zeiger intitialisieren(wir setzen einen Zeiger auf den Zeiger der auf array[0] zeigt)

    ptrI = i_arr;
    ptrF = f_arr;

    //Array Elemente ausgeben
    
    for (int i = 0; i < MAX; i++){
        printf("%d\t%.1f\n", *ptrI++, *ptrF++);
    }


    return 0;
}
