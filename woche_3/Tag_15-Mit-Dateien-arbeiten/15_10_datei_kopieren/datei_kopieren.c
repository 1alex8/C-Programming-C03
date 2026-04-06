#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//funktion zum kopieren:
int datei_kopieren(char *orginal, char *kopie);

int main(int argc, char *argv[]){

    char quelle[100], ziel[100];

    //Namen der Dateien anfordern

    printf("\nGeben Sie die Quelldatei an: ");
    fgets(quelle, 100, stdin);
    quelle[strlen(quelle) -1] = '\0';

    printf("\nGeben Sie die Quelldatei an: ");
    fgets(ziel, 100, stdin);
    ziel[strlen(ziel) -1] = '\0';

    if(datei_kopieren(quelle, ziel) == 0){
        puts("\nErfolgreich kopiert");
    }else{
        fprintf(stderr, "Fehler beim kopieren");
    }

    return 0;
}

int datei_kopieren(char *orginal, char *kopie){
    FILE *falt, *fneu;
    int c;

    //öffnet die quelldatei:
    if((falt = fopen(orginal, "rb")) == NULL){
        return -1;
    }

    //öffnet neue:
    if((fneu = fopen(kopie, "wb")) == NULL){
        fclose(falt);
        return -1;
    }

    while(1){
        c = fgetc(falt);

        if(!feof(falt)){
            fputc(c, fneu);
        }else break;
    }

    fclose(falt);
    fclose(fneu);

}