//Beispiele für die Funktion fopen();
#include<stdio.h>//fopen();
#include<stdlib.h>
#include<string.h>
#include<ctype.h>//für tolower();

int main(void){
    FILE *fp;
    char ch, dateiname[40], modus[5];

    while(1){
        //Eingabe des Dateinamen und des Modus:
        printf("\nGeben Sie einen Dateinamen ein: ");
        fgets(dateiname, 40, stdin);
        dateiname[strlen(dateiname)-1] = '\0';

        printf("Geben sie den Modus operandi ein: ");
        fgets(modus, 5, stdin);
        modus[strlen(modus) - 1] = '\0';

        //Versucht Datei zu öffenen

        if((fp = fopen(dateiname, modus)) != NULL){
            printf("\n%s erfolgreich im Modus %s geöffnet.", dateiname, modus);
            fclose(fp);
            puts("\nx für Ende, weiter mit Eingabetaste: ");
            if(tolower(ch = getc(stdin)) == 'x'){
                exit(0);
            }
            else continue;
        }
        else{
            fprintf(stderr, "\nFehler beim öffnen von %s im Modus %s \n", dateiname, modus);
            perror("15_1_fopen.c failed at opening file");
            if(tolower(ch = getc(stdin)) == 'x'){
                exit(0);
            }
            else continue;
        }
    }


    return 0;
}