/*Mit fseek kann man den Positionszeiger an eine Beliebige stelle in der Datei setzen

Prototyp: int fseek(FILE *fp, long offset, int ausgangspunkt);

offset: distanz um die der PosZeiger verschoben wird in Byte;

ausgangspunkt: gibt die Position an von der aus die Verschiebung berechnet wird
            SEEK_SET    0     Verschiebt zeiger um offset byte vom Beginn der Datei
            SEEK_CUR    1     Verschiebt Zeiger um offset byte von der Aktuellen Position
            SEEK_END    2     Verschiebt Zeiger um offset byte vom Ende der Datei*/


#include<stdio.h>
#include<stdlib.h>

#define MAX 50


int main(int argc, char *argv[]){

    FILE *fp;
    int daten, arr[MAX];
    long offset;

    // Initialisert array
    for(int i = 0; i < MAX; i++){
        *(arr + i) = i * 10;
    }

    //öffnet eine Binäre Datei zum schreiben
    if((fp = fopen("binaer.txt", "wb")) == NULL){
        fprintf(stderr, "Fehler beim öffnen zum schreiben");
        exit(1);
    }

    //schreibt das Array in die Datei und schließt sie dann

    if((fwrite(arr, sizeof(int), MAX, fp)) != MAX){
        fprintf(stderr, "Fehler beim schreiben diggi");
        exit(1);
    }
    fclose(fp);

    //öffnet Datei zum lesen:
    if((fp = fopen("binaer.txt", "rb")) == NULL){
        fprintf(stderr, "Fehler beim öffnen zum lesen");
        exit(1);
    }
    //Fragt Anwender, welches Element gelesen werden soll:
    //Liest Ellement ein und zeigt es an ProgEnde mit -1

    while(1){
        printf("\nGeben Sie das einzulesende Element ein: 0 - %d, -1 für ProgEnde: ", MAX);
        scanf("%ld", &offset);

        if (offset < 0) break;
        else if(offset > MAX-1) continue;

        //Verschiebt PosZeiger zum angegebenen Element:
        if((fseek(fp, sizeof(int)*offset, SEEK_SET)) != 0){
            fprintf(stderr, "\nFehler bei Verschiebung");
            exit(1);
        }
        //Liest einen Int ein:
        fread(&daten, sizeof(int), 1, fp);

        printf("\nElement %ld: %d", offset, daten);
    }
    fclose(fp);
    return 0;
}