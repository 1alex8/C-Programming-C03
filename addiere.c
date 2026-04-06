#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){

    int x ;

    x = atoi(argv[1]) + atoi(argv[2]);
    printf("X = %d", x);

    return 0;
}