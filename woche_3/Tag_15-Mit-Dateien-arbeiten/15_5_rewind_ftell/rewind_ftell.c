/*Beispiel für Verwendung von:
ftell():    Ermitteln des Werts des Positionszeigers; 
            prototyp: long ftell(FILE *fp);

rewind:     Positionszeiger auf den Anfang der Datei setzen
            Prototyp: void rewind(FILE *fp);
*/

#include<stdio.h>
#include<stdlib.h>

#define BUFFER_SIZE 6

int main(int argc, char *argv[]){
    FILE *fp;
    char buffer[BUFFER_SIZE];
    char *message = "abcdefghijklmnopqrstuvwxyz";

    if((fp=fopen("test.txt", "w")) == NULL){
        fprintf(stderr, "Fehler beim öffnen von test.txt");
        exit(1);
    }
    if(fputs(message, fp) == EOF){
        fprintf(stderr, "Fehler beim schreiben in Datei");
        exit(2);
    }
    fclose(fp);

    if((fp=fopen("test.txt", "r")) == NULL){
        fprintf(stderr, "Fehler beim öffnen für lesen");
        exit(1);
    }

    printf("\nDirekt nach dem öffnen: %ld", ftell(fp));

    //Liest 5 Zeichen ein:
    fgets(buffer, BUFFER_SIZE, fp);
    printf("\nNach dem Einlesen von \"%s\", Position %ld", buffer, ftell(fp));

    //Liest die nächsten 5 Zeichen
    fgets(buffer, BUFFER_SIZE, fp);
    printf("\n\nNach dem Einlesen der nächsten 5: \"%s\", Position %ld", buffer, ftell(fp));

    //Positionszeiger auf Anfang setzten;
    rewind(fp);

    printf("\n\nNach dem zurücksetzen des PosZeigers: Position: %ld", ftell(fp));

    //Liest wieder 5 Zeichen ein:
    fgets(buffer, BUFFER_SIZE, fp);
    printf("\n\nund wieder Einlesen von vorn: \"%s\"; Position: %ld", buffer, ftell(fp));

    // fp schließen
    fclose(fp);

    return 0;
}