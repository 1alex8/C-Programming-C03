/*
feof() = erkennt das Dateiende von binärdateien
Prototyp: int feof(FILE *fp);

int = 0; Ende nicht erreicht
int != 0; Ende erreicht
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_SIZE 100

int main(){
    char buffer[BUFFER_SIZE];
    char datei[60];
    FILE *fp;
    //int c;

    puts("\nGeben Sie den Namen der auszugebenden Datei ein: ");
    fgets(datei, 60, stdin);
    datei[strlen(datei) - 1 ] = '\0';
    //while((c = getchar()) != '\n' && c != EOF); Zeile nur bei scanf notwendig fgets entfernt schon alles


    if((fp = fopen(datei, "r")) == NULL){
        fprintf(stderr, "Fehler beim öffnen von %s", datei);
        exit(1);
    }

    while(!feof(fp)){
        fgets(buffer, BUFFER_SIZE, fp);
        fprintf(stdout, "%s", buffer);
    }
    printf("\n");
    fclose(fp);

    return 0;
}