/*
Das Programm nimmt Alter und Einkommen von bis zu 100 Personen auf . 
Das Programm gibt auf Grundlage der eingegebenen Zahlen einen Bericht aus.
*/

// eingebundenen Header
#include<stdio.h>

//definierte Konstanten:

#define MAX 100
#define JA 1
#define NEIN 0

// Variablen

long einkommen[MAX];
int jahr[MAX], monat[MAX], tag[MAX];
int ctr;


// Funktionsprototypen

int anweisungen_anzeigen(void);
void daten_einlesen(void);
void bericht_anzeigen(void);
int fortfahren_funktion(void);

// Beginn des Programms

int main(int argc, char * argv[]){
    int cont; // zur Programmsteuerung
    cont = anweisungen_anzeigen();

    if(cont == JA){
        daten_einlesen();
        bericht_anzeigen();
    }else{
        printf("\nProgramm vom Anwender abgebrochen!\n\n");
    }

    return 0;
}

/*
Funktion:   anweisungen_anzeigen()
Zweck:      Dieses Programm zeigt Informationen zur Nutzung des Programms an 
            und fordert den Benutzer auf mit 0 das Programms zu verlassen oder mit 1 fortzufahren 
Rückgabewert:   NEIN - wenn der Benutzer 0 eingibt
                JA - Wenn der Benutzer 1 eingibt
*/

int anweisungen_anzeigen(void){
    int cont;
    printf("\n\n\nMit diesem Programm können Sie Einkommen und");
    printf("\nGeburtstage von bis zu 100 Personen eingeben. Anschließend");
    printf("\nwerden die Daten (inklusive Gesamtzahlungen und durchschnittlichem Einkommen) ausgegeben.\n");

    cont = fortfahren_funktion();
    return cont;
}

/*
Funktion:   daten_einlesen();
Zweck:      Diese Funktion liest die Daten vom Anwender ein.
            Dies geht so lange, bis fortfahren_funktion den Wert NEIN returned

Rückgabewert : Keiner
Hinweis:    Geburstage bei denen sich der Anwender nicht 
            sicher ist können als 0/0/0 eingegeben werden.
            Außerdem sind 31 Tage in jedem Monat möglich.

*/

void daten_einlesen(void){
    int cont;

    for(cont = JA, ctr = 0; ctr < MAX && cont == JA; ctr++){
        printf("Bitte Informationen zur Person %d eingeben.", ctr + 1);
        printf("\n\tGeburtstag eingeben: ");

        do{
            printf("\n\t Tag 0 - 31: ");
            scanf("%d", &tag[ctr]);
        }while(tag[ctr] < 0 || tag[ctr] > 31);

        do{
            printf("\n\t Monat 0 - 12: ");
            scanf("%d", &monat[ctr]);
        }while(monat[ctr] < 0 || monat[ctr] > 12);

        do{
            printf("\n\t Jahr 0 - 3000: ");
            scanf("%d", &jahr[ctr]);
        }while(jahr[ctr] < 0 || jahr[ctr] > 3000);

        printf("\nBitte Jahreseinkommen eingeben: ");
        scanf("%d", &einkommen[ctr]);

        cont = fortfahren_funktion();
    }
    return;
}

/*
Funktion: bericht_anzeigen()
Zweck: Die Funktion gibt einen Bericht aus 
Rückgabewert: keiner
Hinweis: Weitere Informationen können ausgegben werden
*/

void bericht_anzeigen(void){
    int y;//zum zählen
    int summe = 0;//für die gesamtsumme

    printf("\n\n\n\n\tGehaltsüberblick\n\t===================");

    for(y = 0; y < ctr; y++){
        printf("\nPerson %d: \n", y);
        printf("\tGeburtstag: %d.%d.%d", tag[y], monat[y], jahr[y]);
        printf("\tEinkommen: %ld\n", einkommen[y]);

        summe += einkommen[y];
    }


    printf("\n\nJahreswerte : ");
    printf("\nDie Gesamtlohnzahlungen betragen: %d", summe);
    printf("\nDas Durchschnittseinkommen beträgt: %d", summe/ctr);

    printf("\n\n***ENDE DES BERICHTS***");


}

/*
Funktion fortfahren_funktion()
Zweck Die Funktion fragt den Benutzer, ob er fortfahren will.
Rückgabewert:   JA - wenn der Benutzer fortfahren will
                NEIN - wenn der Benutzer das Programm verlassen will.

*/

int fortfahren_funktion(void){
    int x;
    printf("\n\nMöchten Sie fortfahren? (0 = NEIN | 1 = JA): ");
    scanf("%d", &x);

    while( x < 0 || x > 1){
        printf("\n%d ist ungültig!",x);
        printf("Mit 0 verlassen oder mit 1 fortfahren: ");
        scanf("%d", &x);
    }

    if(x == 0){
        return NEIN;
    }else{
        return JA;
    }
}