/*Beispiel zur Illustration von globalen Gültigkeitsbereich*/

#include <stdio.h>

int x = 999;

void wert_ausgeben(void);

int main(int argc, char *argv[]){

    printf("Wert im Main: %d\n", x);

    wert_ausgeben();

    return 0;
}

void wert_ausgeben(void){
    printf("Wert im funk: %d\n", x);
}