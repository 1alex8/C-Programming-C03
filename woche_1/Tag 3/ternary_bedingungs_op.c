#include<stdio.h>

int main(int argc, char *argv[]){

    int x = 30;
    int y = 0;
    // ternary operator: if(x>y) x; else y;
    printf("Der größere Wert lautet : %d", ((x > y) ? x : y));

    return 0; 
}