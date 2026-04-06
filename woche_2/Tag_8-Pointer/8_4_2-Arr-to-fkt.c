#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int groesster(int *, int);

int main(int argc, char *argv[]){

    int arr[MAX], c = 0;

    for(int i = 0; i < MAX; i++){
        printf("Geben Sie %d.Wert ein: ", i + 1);
        scanf("%d", &arr[i]);
        c++;
        
    }

    printf("Der Größte Wert ist : %d", groesster(arr, MAX));

    return EXIT_SUCCESS;
}

int groesster(int *arr, int c){

    int count, max = *arr;
    for (count = 0; count < c; count++){
        if(*arr > max) max = *arr;
        arr++;
    }

    return max;
    
}