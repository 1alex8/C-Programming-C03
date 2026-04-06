#include <stdio.h>

int groesser1(int, int);
int *groesser2(int *, int *);

int main(int argc, char *argv[]){
    int a, b, bigger1, *bigger2;

    printf("Geben Sie 2 Int Werte ein: ");
    scanf("%d %d", &a, &b);

    bigger1 = groesser1(a, b);
    printf("\nDer größere Wert aus CBV ist: %d", bigger1);

    bigger2 = groesser2(&a, &b);
    printf("\nDer größere Wert aus CBR ist :%d", *bigger2);
}

int groesser1(int x , int y){
    if(x > y) return x;
    return y;
}

int *groesser2(int *x, int *y){
    if(*x > *y) return x;
    return y;
}