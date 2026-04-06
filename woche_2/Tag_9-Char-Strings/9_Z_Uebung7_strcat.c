#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void kombinieren(char *, char *);

int main(int argc, char *argv[]){

    char *a;
    char *b;

    a = malloc(100 * sizeof(char));
    strcpy(a, "Fuck");
    b = malloc (100 * sizeof(char));
    strcpy(b, "You");

    kombinieren(a, b);

    printf("%s", a);

    free(a);
    free(b);

    return 0;
}

void kombinieren(char *first, char *second){
    strcat(first, second);
}