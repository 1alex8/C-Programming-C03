#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

    float x, a, b;
    char *ptr;
    char *ptr2;

    //a = strtof(argv[1], &ptr);
    //b = strtof(argv[2], &ptr2);

    //x = a * b;

    x = strtof(argv[1], &ptr) * strtof(argv[2], &ptr2);
    printf("X = %f", x);

    return 0;
}