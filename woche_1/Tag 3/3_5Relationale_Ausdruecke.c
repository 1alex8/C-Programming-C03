#include<stdio.h>

int main(int argc, char *argv[]){
    int a;
    a = 5==5;
    printf("\na = (5 == 5)\na = %d\n", a);
    printf("\n");
    a = 5 != 5;
    printf("\na = (5 != 5)\na = %d\n", a);
    printf("\n\n");
    a = (12 == 12) + (5 != 1);
    printf("\na = (12 == 12) + (5 != 1)\na = %d\n", a);
    return 0;
}