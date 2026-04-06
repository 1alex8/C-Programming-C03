// Mit getchar Strings einlesen:

#include<stdio.h>
#define LEN 80

int main(int argc, char *argv[]){

    char c, puffer[LEN + 1];// +1 weil am Ende noch der \0 angehängt wird
    int x = 0;
    char *message = "Gib einen String ein: ";
    puts(message);

    while((c = getchar()) != '\n' && x < LEN){
        puffer[x++] = c;
    }
    puffer[x] = '\0';// für String Ende Markierung

    printf("\n%s", puffer);

    return 0;
}