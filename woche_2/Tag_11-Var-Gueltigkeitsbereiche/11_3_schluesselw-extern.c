#include <stdio.h>

int x = 999;

void wert_ausgeben(void);

int main(void){
    extern int x;

    printf("%d\n",x);
    x++;

    wert_ausgeben();

    return 0;
}

void wert_ausgeben(void){
    extern int x;
    printf("%d\n", x);
}