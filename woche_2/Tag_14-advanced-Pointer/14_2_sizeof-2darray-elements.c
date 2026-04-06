#include<stdio.h>

int main(int argc, char *argv[]){

    int matrix[2][4];

    printf("\nGröße in Bytes von matrix:       %d", sizeof(matrix));
    printf("\nGröße in Bytes von Matrix[0]:    %d", sizeof(matrix[0]));
    printf("\nGröße in Bytes von matrix[0][0]: %d", sizeof(matrix[0][0]));

    return 0;
}

/*
Ausgabe: 
Größe in Bytes von matrix:       32
Größe in Bytes von Matrix[0]:    16
Größe in Bytes von matrix[0][0]: 4
*/