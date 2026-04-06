// fgets: char *fgets(char *str, n, FILE *fp);
/*fgets ließt immern n - 1 Zeichen ein, aber die Funktion stoppt nicht,
wenn n-1 Zeichen erreicht sind : das wird hier demonstriert.*/

#include <stdio.h>

#define MAXLEN 10 // die Maximale Anzahl wird hier auf 10 gesetzt : n

int main(int argc, char *argv[]){
    char puffer[MAXLEN];

    puts("Ab jetzt Eingabe von Strings: ");
    while(1){
        fgets(puffer, MAXLEN, stdin);
        
        if(puffer[0] == '\n') break;

        puts(puffer);
    }
    return 0;
}