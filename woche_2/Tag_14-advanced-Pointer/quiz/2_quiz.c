#include<stdio.h>

int main(){
    float x = 69.420;
    float *px = &x;
    float **ppx = &px;

    **ppx = 100;

    printf("\nx über ppx = %.3f", x);
}