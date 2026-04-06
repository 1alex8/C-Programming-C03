#include<stdio.h>

#define ascii 128

int main(){
    for (int i = 14; i < ascii; i++){
        putchar(i);
    }
    printf("äöü");
    return 0;
}