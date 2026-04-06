#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * vergleiche_laenge(char *, char*);


int main(int argc, char *argv[]){

    char *a = "Hello";
    char *b = "Fuck";
    char *l;
    l = vergleiche_laenge(a, b);
    puts(l);
    return 0;
}


char * vergleiche_laenge(char *first, char *second){
    int a, b;

    a = strlen(first);
    b = strlen(second);

    if(a > b) return first;
    else return second;
}