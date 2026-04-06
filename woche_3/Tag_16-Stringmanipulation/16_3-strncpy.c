/*
strncpy(); 
Erklärung: fast wie strcpy aber mit dem Unterschied, dass hier angegeben wird wie viele Zeichen kopiert werden sollen.
Wenn source kürzer als n ist wird mit 0 aufgefüllt.
Wenn source länger ist wird der string abgeschnitten und es wird kein abschließendes \0 anghängt.

Prototyp:
char *strncpy(char *destination, char *source, size_t n);
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){

    char ziel[] = "..........................";
    char quelle[]= "abcdefghijklmnopqrstuvwxyz";

    size_t n;

    while(1){
        puts("\nGeben Sie an wie viele Zeichen kopiert werden sollen: ");
        scanf("%lld", &n);

        if(n > 0 && n < 27) break;
    }

    printf("\nZiel vor Aufruf: %s", ziel);

    strncpy(ziel, quelle, n);

    printf("\nZiel nach Aufruf: %s", ziel);

    return 0;
}