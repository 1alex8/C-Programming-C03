// strrchr sucht nach dem letzten Vorkommen von einem character in einem String
/*
char *strrchr(char *s, int ch);

es gibt einen Zeiger auf die Position von ch in s zurück
position ermitten einfach durch Poszeiger - sZeiger

wenn nichts gefunden wird wird NULL zurück gegeben

Groß und kleinschreibung werden berücksichtigt.
*/

#include<stdio.h>
#include<string.h>


int main(int argc, char *argv[]){

    char *location, buffer[100];
    int ch;

    printf("\nGeben Sie einen String ein: ");
    fgets(buffer, 100, stdin);
    buffer[strlen(buffer) - 1 ] = '\0';

    printf("\nGeben Sie ein Zeichen zum suchen ein: ");
    ch = getchar();

    location = strrchr(buffer, ch);

    if(location == NULL){
        printf("\nDas Zeichen %c konnte nicht gefunden werden", ch);
    }else{
        printf("\nDas Zeichen %c wurde an der der Position %d gefunden.", ch, (int)(location - buffer));
    }

    return 0;
}

/*
Ausgabe:
Geben Sie einen String ein: Alles klar auf der Andrea Doria

Geben Sie ein Zeichen zum suchen ein: a

Das Zeichen a wurde an der der Position 30 gefunden.
*/