#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    char x[] = "zaz";

    int sum = 0;

    int anz= (sizeof(x)/sizeof(x[1])) - 2;

    for(int i=0; i < anz; i++){
        if(x[i]> x[i+1]){
            sum += (int)x[i] - (int)x[i + 1];
        }
        else {
            sum += (int)x[i + 1] - (int)x[i];
        }
    }

    printf("x = %d", sum);

    return EXIT_SUCCESS;
}