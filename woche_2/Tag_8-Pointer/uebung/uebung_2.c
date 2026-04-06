#include <stdio.h>

#define SIZE 5

void addarray(int *, int *);

int main(int argc, char * argv[]){
    int a[SIZE] = {1, 1, 1, 1, 1};
    int b[SIZE] = {9, 8, 7, 6, 5};
    addarray(a, b);
}

void addarray(int *x, int *y){
    int total[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        total[i] = x[i] + y[i];
        printf("%d + %d = %d", x[i], y[i], total[i]);
    }
}