#include<stdio.h>

void wert_ausgeben(int);

int main(int argc, char *argv[]){

    int x = 999;

    printf("Im Main: %d", x);

    wert_ausgeben(x);

    return 0;
}

void wert_ausgeben(int a){
    printf("Wert im func aus Main: %d", a);
}