#include<stdio.h>
#include<stdlib.h>

int groesser(int, int);

int main(int argc, char *argv[]){

    int x, y, z;

    puts("Gib 2 Integer-Werte ein: ");
    scanf("%d%d",&x, &y);

    z = groesser(x, y);

    printf("Der größere Wert ist: %d", z);

    return EXIT_SUCCESS;
}

int groesser(int a, int b){
    if (a > b) return a;
    else return b;
}