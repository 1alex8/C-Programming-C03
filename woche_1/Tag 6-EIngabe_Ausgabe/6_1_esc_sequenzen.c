#include<stdio.h>
#include<stdlib.h>

const int verlassen = 3;

int menue_option_einlesen(void);
void bericht_anzeigen(void);

int main(int argc, char *argv[]){

    int option = 0;

    while(option != verlassen){
        option = menue_option_einlesen();
        if(option == 1){
            printf("\nAkkustisches Signal des Computers\a\a\a");
        }
        else if(option == 2){
            bericht_anzeigen();
        }
    }
    printf("Sie haben Option: Verlassen gewählt\n");

    return EXIT_SUCCESS;
}

int menue_option_einlesen(void){
    int auswahl = 0;
    do{
        printf("\n");
        printf("\n1- Akustisches Signal des Computers");
        printf("\n2- Bericht anzeigen");
        printf("\n3- Verlassen");
        printf("\n");
        printf("\nGeben Sie ihre Wahl ein: ");
        scanf("%d", &auswahl);
    }while(auswahl < 1 || auswahl > 3);
    return auswahl;
}

void bericht_anzeigen(void){
    printf("\nMUSTERBERICHT");
    printf("\n\nSequenz\tBedeutung");
    printf("\n=========\t==========");
    printf("\n\\a\t\tBeep (Akustisches Signal)");
    printf("\n\\b\t\tBackspace");
    printf("\n......\t\t.........");
}