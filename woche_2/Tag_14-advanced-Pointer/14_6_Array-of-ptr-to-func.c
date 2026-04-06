// Ein Array von Pointern auf char initialisieren und nutzen

#include<stdio.h>

void stringausgabe(char *[], int);

int main(int argc, char *argv[]){

    char *meldungen[6] = {"Vor", "vier", "Generationen", "begannen", "unsere", "Vorväter"};// 6 wäre in diesem Fall nicht nötig

    stringausgabe(meldungen, 6);

    return 0;
}

void stringausgabe(char *string[], int n){
    for(int i = 0; i < n; i++){
        printf("%s ", string[i]);
    }
    printf("\n");
}

//Ausgabe:
/*
Vor vier Generationen begannen unsere Vorväter
*/