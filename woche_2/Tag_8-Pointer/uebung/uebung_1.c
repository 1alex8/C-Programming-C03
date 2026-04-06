#include<stdio.h>

int sumarrays(int *, int, int *, int);

int main(int argc, char * argv[]){
    int arrX[5] = {1, 2, 3, 4, 5};
    int arrY[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sum;
    int lX = sizeof(arrX) / sizeof(arrX[0]);
    int lY = sizeof(arrY) / sizeof(arrY[0]);

    sum = sumarrays(arrX, lX, arrY, lY);

    printf("\nTotal ist %d\n", sum);
}

int sumarrays(int *arr1, int l1, int *arr2, int l2){
    int total = 0;

    for(int i = 0; i < l1; i++){

        total += *arr1;
        arr1++;
        
    }
    for(int i = 0; i < l2; i++){
        total += arr2[i];
    }

    return total;
}