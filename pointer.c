#include<stdio.h>

int main(void){
    int number = 1;
    int *knowsnumber = &number;
    int **knows_knowsnumber = &knowsnumber;

    printf("number: %d\nknows:%d\nknows_knows:%d\n", number, *knowsnumber,**knows_knowsnumber);

    return 0;
}