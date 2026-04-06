#include<stdio.h>

#define zeilen 12
#define spalten 12

void gitterOutput(char (*)[]);

int main(int argc, char *argv[]){

    char array[zeilen][spalten];

    for(int i = 0; i < zeilen; i++){
        for(int j = 0; j < spalten; j++){
            array[i][j] = 'x';
        }
    }
    gitterOutput(array);

    return 0;
}

void gitterOutput(char (*x)[spalten]){
    for(int i = 0; i < zeilen; i++){
        for(int j = 0; j < spalten; j++){
            printf("%c ", *(*(x + i)+ j));
        }
        printf("\n");
    }
}