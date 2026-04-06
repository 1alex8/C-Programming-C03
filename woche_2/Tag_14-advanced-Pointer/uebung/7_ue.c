#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define werte 10

void input(double *);
void output(double *);
void sort(double *);
int LoHi(double *, double *);
int HiLo(double *, double *);

int main(int argc, char*argv[]){

    double arr[werte];
    input(arr);
    sort(arr);
    output(arr);

    return 0;
}

void input(double *arr){
    puts("\nGeben Sie 10 Werte ein: ");
    for(int i = 0; i < werte; i++){
        printf("\nGeben Sie %d.Wert ein: ", i);
        scanf("%lf", arr+i);
    }
}

void output(double *arr){
    for(int i = 0; i < werte; i++){
        printf("\n%d.Wert: %.2lf", i, *(arr + i));
    }
}

void sort(double *arr){
    int (*compare)(double *d1, double *d2);
    int dec = 0;
    printf("Geben Sie 1 für Low to High und 0 für High to Low ein: ");
    scanf("%d", &dec);
    double temp;

    compare = dec?LoHi : HiLo;

    for(int i = 0; i < werte; i++){
        for(int j = 0; j < (werte - 1); j++){
            if(compare(arr + j, arr + j + 1) > 0){
                temp = *(arr +j);
                *(arr + j) = *(arr + j +1);
                *(arr+j +1) = temp;
            }
        }
    }
}

int LoHi(double *d1, double *d2){
    if(*d1 > *d2) return 1;
    else return 0;
}

int HiLo(double *d1, double *d2){
    if(*d1 < *d2) return 1;
    else return 0;
}
