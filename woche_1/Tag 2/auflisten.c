//auflisten.c Zeigt ein Listing mit Zeilennummern an

#include<stdio.h>
#include<stdlib.h>

void verwendung_anzeigen(void);

int zeile;

int main(int argc, char *argv[]){
    char puffer [256];

    FILE *fp;

    if(argc < 2){
        verwendung_anzeigen();
        return 1;
    }

    if((fp = fopen(argv[1], "r")) == NULL){
        fprintf(stderr, "Fehler beim öffnen der Datei, %s!\n", argv[1]);
        return 1;
    }
    zeile = 1;
    while(fgets(puffer, sizeof(puffer), fp) != NULL){
        fprintf(stdout, "%4d:\t%s", zeile++, puffer);

    }
    fclose(fp);
    return 0;

}

void verwendung_anzeigen(void){
    fprintf(stderr, "\nProgramm wie folgt starten: \n");
    fprintf(stderr, "\n\n auflisten dateiname.ext\n");
    getchar();
}