#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void buffer(void);

int main(int argc, char *argv[]){
    FILE *fp;
    float daten[5];
    char dateiname[50];

    puts("\nGeben Sie 5 Floats ein: ");

    for(int i = 0; i < 5; i++){
        printf("\n%d.Float: ", i +1);
        scanf("%f", daten + i);
    }

    // Liest Daten ein und öffnet die Datei. 
    // Zuerst clear buffer
    buffer();

    puts("\nGeben Sie den Namen für die Datei ein: ");
    fgets(dateiname, 40,stdin);
    dateiname[strlen(dateiname) - 1] = '\0';
    // modus operandi ist ein string also entweder einen Zeiger angeben oder den Modus in " " setzen
    if((fp = fopen(dateiname, "a+")) == NULL){
        fprintf(stderr, "Fehler beim öffnen");
        exit(1);
    }
    // Schreibt Daten in Datei:
    
    for(int i = 0; i < 5; i++){
        fprintf(fp, "Daten %d: %.2f\n", i + 1, *(daten + i));
        fprintf(stdout, "Daten %d: %.2f\n", i + 1, *(daten + i));
    }

    fclose(fp);
    puts("");


    return 0;
}


void buffer(void){
    int c;

    while((c=getchar()) != '\n' && c != EOF);
}