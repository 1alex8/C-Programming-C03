/*getchar () liest das nächste Zeichen aus dem Stream stdin ein. 
Die Funktion unterstüzt gepufferte Zeicheneingabe mit Echoverhalten
Ihr Prototyp lautet:
int getchar(void);

*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int ch;
    puts("Gib etwas neues ein (Jetzt startet die Schleife-->): ");
    while((ch = getchar()) != '\n'){
        putchar(ch);
    }

    return 0;
}