#include<stdio.h>

int main(int argc, char *argv[]){

    int matrix[2][4];

    printf("\nmatrix = %p", matrix);
    printf("\nmatrix[0] = %p", matrix[0]);
    printf("\nmatrix[0][0] = %p", &matrix[0][0]);

    return 0;
}