#include<stdio.h>

int main(int argc, char *argv[]){
    int val = 69;
    int *pVal = &val;
    int *pxVal = pVal;// ist möglich : hier geben wir dem neuen Zeiger auch die Adresse von val
    int **ppVal = &pVal;// standard : hier geben wir dem neuen Zeiger die Adresse des alten Zeigers

    printf("\nWert von val: %d", val);
    printf("\nWert von val über pVal: %d", *pVal);
    printf("\nWert von val über pxVal: %d", *pxVal);
    printf("\nWert von val über ppVal: %d", **ppVal);


    //Neuzuweisung:
    **ppVal = 300;

    printf("\n\n Nach zuweisung von 300 zu val über ppVal: ");
    printf("\nWert von val: %d", val);
    printf("\nWert von val über pVal: %d", *pVal);
    printf("\nWert von val über pxVal: %d", *pxVal);
    printf("\nWert von val über ppVal: %d", **ppVal);


    return 0;
}