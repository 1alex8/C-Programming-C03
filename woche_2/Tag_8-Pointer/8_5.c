#include<stdio.h>

#define MAX 3

int groesster(int []);

int main(int argc, char *argv[]){

    int arr[MAX+1];
    int i;
    
    for(i = 0; i < MAX; i++){
        printf("Geben Sie einen den %d.ten Integerwert ein: ", i+1);
        scanf("%d", &arr[i]);

        if(arr[i] == 0){
            i = MAX;
        }
    }

    arr[MAX] = 0;

    printf("\n\nGrößter Wert = %d\n", groesster(arr));


    return 0;
}

int groesster(int x[]){
    int i, max;
    max = x[0];

    for(i = 0; x[i] != 0 ; i++){
        if(x[i] > max){
            max = x[i];
        }
    }

    return max;
}