/*
strcmp vergleicht 2 strings Zeichen für Zeichen nach dem ASCII verfahren 

Prototyp: int strcmp(char *s1, char *s2); 

Rückgabewert:   | Bedeutung:
<0              | s1 ist kleiner als s2
0               | s1 == s2
>0              | s1 ist größer als s2
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

    char s1[100], s2[100];
    int x;

    while(1){
        //2 Strings einlesen

        printf("\n\nErster String / Enter für Ende: ");
        fgets(s1, 100, stdin);
        s1[strlen(s1) - 1] = '\0';

        if(strlen(s1) < 2) break;

        printf("\nZweiter String: ");
        fgets(s2, 100, stdin);
        s2[strlen(s2) - 1] = '\0';

        // strings vergleichen

        x = strcmp(s1, s2);

        printf("\nstrcmp(%s, %s) liefert %d zurück", s1, s2, x);
    }


    return 0;
}