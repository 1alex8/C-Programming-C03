/*system(Argument) führt einen terminal befehl aus
Headerdatei : stdlib.h
argument ist ein string oder ein pointer auf einen string:
Beispiel:
system("ls");

oder :

char *befehl = "ls";
system(befehl);
*/

#include<stdio.h>
#include<stdlib.h> // system und exit befehle

int main(int argc, char *argv[]){
    char *befehl = malloc(40 * sizeof(char));

    while (1)
    {
        // Ließt Befehl des Anwenders ein:
        
        puts("\nSystembefehl eingeben (Enter für Eingabe):");
        fgets(befehl, 40, stdin);

        if(*befehl == '\n') exit(0);
        //führt den Befehl aus

        system(befehl);
    }
    

    free(befehl);
    return 0;
}