// Ein Array von Pointern auf char initialisieren und nutzen

#include<stdio.h>

int main(int argc, char *argv[]){

    char *meldungen[6] = {"Vor", "vier", "Generationen", "begannen", "unsere", "Vorväter"};// 6 wäre in diesem Fall nicht nötig

    for(int i = 0; i < 6; i++){
        printf("%s ", meldungen[i]);
    }
    puts("\n");

    return 0;
}

//Ausgabe:
/*
Vor vier Generationen begannen unsere Vorväter 
*/