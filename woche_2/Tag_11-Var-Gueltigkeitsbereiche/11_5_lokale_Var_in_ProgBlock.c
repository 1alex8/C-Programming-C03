/*Beispiel für lokale Var innerhalb eines Programm-Blocks*/

#include <stdio.h>

int main(int argc, char *argv[]){

    /*Definiert eine Variable  lokal zu main*/
    int x = 0;
    int y = 0;
    printf("\nAußerhalb des Blocks: x = %d, y = %d", x, y);

    /*Anfang des Prog-Blocks*/
    {
        /*Definiert eine Var im Prog-Block*/
        int x = 999;
        y = 999;
        printf("\nInnerhalb des Blocks: x = %d, y = %d", x, y);
    }

    printf("\nErneut außerhalb des Blocks: x = %d, y = %d", x, y);

    return 0;
}

/*
Ausgabe : 

Außerhalb des Blocks: x = 0, y = 0
Innerhalb des Blocks: x = 999, y = 999
Erneut außerhalb des Blocks: x = 0, y = 999


*/