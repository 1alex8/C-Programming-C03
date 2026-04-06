#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){

    int rand_array[10][10][10];
    // array mit insgesamt 1000 elementen: startet bei 0 0 1 endet bei 9 9 9

    int a, b, c;

    for(a = 0; a < 10; a++){
        for(b = 0; b < 10; b++){
            for(c = 0; c < 10; c++){
                rand_array[a][b][c] = rand();
            }
        }
    }

    for(a = 0; a < 10; a++){
        for(b = 0; b < 10; b++){
            for(c = 0; c < 10; c++){
                printf("\nrand_array[%d][%d][%d] = ", a, b, c);
                printf("%d", rand_array[a][b][c]);
            }
            printf("\nWeiter mit Eingabetaste, Verlaseen mit STRG-C");
            getchar();
        }
    }

    return 0;
}