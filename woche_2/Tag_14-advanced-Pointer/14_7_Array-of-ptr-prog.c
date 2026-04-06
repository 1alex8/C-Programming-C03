// Liest Strings ein, sortiert diese und gibt sie aus

#include<stdio.h>
#include<stdlib.h>//malloc
#include<string.h>//strlen

#define Zeilen 25
#define buffer_size 100

int stringeingabe(char *[]);
void sort(char *[], int);
void ausgabe(char *[], int);


int main(int argc, char *argv[]){

    int anzahl_Zeilen;
    char *strings[Zeilen];

    anzahl_Zeilen = stringeingabe(strings);
    if(anzahl_Zeilen < 0){
        puts("Fehler bei Speicherallozierung");
        exit(-1);
    }

    sort(strings, anzahl_Zeilen);
    ausgabe(strings, anzahl_Zeilen);


    for(int i = 0; i < anzahl_Zeilen; i++) free(strings[i]);
    return 0;
}

int stringeingabe(char *strings[]){
    int n = 0, slen = 0;
    char puffer[buffer_size];

    puts("Geben Sie eine Zeile ein; Leerzeile zum beenden: ");
    while((n < Zeilen)&&(fgets(puffer, buffer_size, stdin) !=0)){
        slen = strlen(puffer);
        if(slen < 2) break;
        puffer[slen - 1] = 0;

        strings[n] = (char*)malloc(slen + 1);
        if(strings[n] == NULL) return -1;

        strcpy(strings[n++], puffer);
    }

    return n;
}

void sort(char *zeilen[], int n){
    char *temp;
    for(int a = 0; a < n; a++){
        for (int b = 0; b < n - 1; b++){
            if(strcmp(zeilen[b], zeilen[b+1]) > 0){
                temp = zeilen[b];
                zeilen[b] = zeilen[b + 1];
                zeilen[b + 1] = temp;
            }
        }
    }
}

void ausgabe(char *zeilen[], int n){
    for (int i = 0; i < n; i++){
        printf("%s\n", *(zeilen + i));
    }
}