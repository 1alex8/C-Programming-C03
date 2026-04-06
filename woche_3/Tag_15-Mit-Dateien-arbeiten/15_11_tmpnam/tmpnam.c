/*
tmpnam: erzeugt einen temporäre Datei Namen, die Dateien müssen danch wirklich über die vorhergegangenen Funktionen geöffnet werden (allsamt: FILE *fp; fp = fopen(tempname, "modus"); ...)
char *tmpnam(char *string);
*/

#include<stdio.h>

int main(int argc, char *argv[]){

    char buffer[100], *c;

    tmpnam(buffer);

    c = tmpnam(NULL);

    //Gibt Namen aus.

    printf("\nTemp Name 1: %s", buffer);
    printf("\nTemp Name 2: %s", c);

    return 0;
}

/*
Ausgabe:
Temp Name 1: C:\Users\alexm\AppData\Local\Temp\sc80.0
Temp Name 2: C:\Users\alexm\AppData\Local\Temp\sc80.1
*/