#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char datei[80];

    puts("Gib Dateiname ein: ");
    fgets(datei, 80, stdin);
    datei[strlen(datei)-1] = '\0';

    if(remove(datei) == 0){
        printf("\nDatei: %s wurde gelöscht", datei);
    }else{
        fprintf(stderr, "Fehler beim löschen");
        exit(1);
    }
    return 0;
}