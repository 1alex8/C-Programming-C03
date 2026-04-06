#include<stdio.h>
#include<stdlib.h>

void rechteck(int, int);

int main(int argc, char *argv[]){

    rechteck(8,35);


    return EXIT_SUCCESS;
}

void rechteck(int reihe, int spalte){
    int spa, row;
    for(row = reihe ; row > 0; row--){
        for(spa = spalte ;spa > 0; spa--){
            printf("X");
        }
        printf("\n");
    }
}