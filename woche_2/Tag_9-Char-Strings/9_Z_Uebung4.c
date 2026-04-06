#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char *input = malloc(81 * sizeof(char));

    printf("Geben Sie ihren Shit ein: ");
    fgets(input, 81, stdin);

    printf("Ihr Shit : %s", input);

    free(input);

    return 0;
}