/*Beispiel für ein Menüsystem mit einer Endlosschleife */

#include <stdio.h>

// warten um 5sec windows oder UNIX
#ifdef _WIN32
    #include <windows.h>
    #define SLEEP_5sec() Sleep(5000)
#else
    #include <unistd.h> // für Linux und MAC
    #define SLEEP_5sec() sleep(5)
#endif


int menue(void);
void warten(void);

int main(int argc, char *argv[]){

    int option = 0;

    while(1){
        // übernimmt die Auswahl des Anwenders
        option = menue(); // Übernimmt die Auswahl des Anwenders

        //Verzweigt auf Basis der Eingabe
        if(option == 1){
            puts("\nAufgabe A wird ausgeführt\n");
            warten();
        }else if(option == 2){
            puts("\n Aufgabe B wird ausgeführt\n");
            warten();
        }else if(option == 3){
            puts("\nAufgabe C wird ausgeführt\n");
            warten();
        }else if(option == 4){
            puts("\nAufgabe D wird ausgeführt\n");
            warten();
        }else if(option == 5){
            puts("\nSie verlassen das Programm...\n");
            warten();
            break;
        }else{
            puts("\nUngültige Option, versuchen Sie es nochmal.\n");
            warten();
        }
    }

    return 0;
}

int menue(void){
    int antwort;
    puts("\nGeben Sie 1 für Aufgabe A ein: ");
    puts("\nGeben Sie 2 für Aufgabe B ein: ");
    puts("\nGeben Sie 3 für Aufgabe C ein: ");
    puts("\nGeben Sie 4 für Aufgabe D ein: ");
    puts("\nGeben Sie 5 zum verlassen des Programms ein: ");

    scanf(" %d", &antwort);

    return antwort;
}

void warten(void){
    SLEEP_5sec();
}