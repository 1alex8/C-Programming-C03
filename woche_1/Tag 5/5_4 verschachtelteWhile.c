#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int arr[5];
    int ctr = 0, nbr = 0;

    while(ctr < 5){
        nbr = 0;
        while(nbr < 1 || nbr > 10){
            printf("Geben Sie die %d von 5 Zahl zwischen 1 und 10 ein: ", ctr + 1);
            scanf("%d", &nbr);
            arr[ctr] = nbr;
        }

        ctr++;
    }

    for (int i = 0; i < 5; i++) printf("Der Wert von %d lautet: %d\n", i + 1, arr[i]);

    return EXIT_SUCCESS;
}