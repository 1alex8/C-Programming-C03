/*Beispiel für eine continue anweisung*/

#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    char *puffer = malloc(81 * sizeof(char));
    printf("Geben Sie einen Satz mit max 80 Zeichen ein: ");
    fgets(puffer, 40, stdin);

    for(int i = 0; *(puffer + i) != '\0'; i++){
        /* ist das Zeichen ein klein geschriebener Vokal über springe ihn */
        if(*(puffer + i) == 'a'|| *(puffer + i) == 'e'||*(puffer + i) == 'i'||*(puffer + i) == 'o'||*(puffer + i) == 'u'){
            continue;
            /* continue überspringt den rest der Schleife und setzt sie wieder am Anfang der Schleife fort */
        }
        putchar(*(puffer + i)); // selbe wie putchar(puffer[i]);
    }

    free(puffer);

    return 0;
}