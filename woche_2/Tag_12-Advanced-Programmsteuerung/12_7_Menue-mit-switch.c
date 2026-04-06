#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <windows.h>
#else
    #include<unistd.h>
#endif

#ifdef _WIN32
    #define sleep(s) Sleep((s)*1000)
#endif // damit kann man jetzt sekunden auch bei windows eingeben was ich in diesem Programm brauche

int menue(void);

int main(int argc, char *argv[]){

    while (1)
    {
        //Liest die Anweisungen ein und verzweigt auf Basis der Eingabe

        switch (menue())
        {
        case 1:
            puts("\nAufgabe A wird ausgeführt");
            sleep(5);
            break;
        case 2:
            puts("\nAufgabe B wird ausgeführt");
            sleep(5);
            break;
        case 3:
            puts("\nAufgabe C wird ausgeführt");
            sleep(5);
            break;
        case 4:
            puts("\nAufgabe D wird ausgeführt");
            sleep(5);
            break;
        case 5:
            puts("\nProgramm wird beendet");
            sleep(5);
            exit(0);//Beendet das Programm
        default:
            printf("\nUngültige Option");
            sleep(3);
            break;
        }
    }
    
    return 0;
}

// Gibt Menue aus und nimmt Eingabe auf

int menue(void){
    int antwort;
    printf("\nGeben Sie 1 für Aufgabe A ein:");
    puts("\nGeben Sie 2 für Aufgabe B ein:");//puts hängt hinten ein \n an
    printf("\nGeben Sie 3 für Aufgabe C ein:");
    printf("\nGeben Sie 4 für Aufgabe D ein:");
    printf("\nGeben Sie 5 für \"Programm Ende\" ein:");
    scanf(" %d", &antwort);
    return antwort;
}