#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyString(char *, char *);

int main(int argc, char *argv[]){

    char *a = "Das ist jetzt mein String";
    char *b;
    int anzahl = strlen(a);
    b = malloc((anzahl + 1) * sizeof(char));
    if(b == NULL) return 1;
    copyString(a, b);
    printf("%s", b);

    free(b);

    return 0;
}

void copyString(char *Quelle, char *Ziel){
    
    while((*Ziel++ = *Quelle++) != '\0'){}
}