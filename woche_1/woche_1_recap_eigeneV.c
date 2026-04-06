#include<stdio.h>
#include<stdlib.h>

#define MAX 100
#define JA 1
#define NEIN 0

int ctr;

int anweisungen_anzeigen(void);
int fortfahren_funktion(void);
void daten_einlesen(int[], int[], int[], long[]);
void bericht_anzeigen(int[], int[], int[], long[]);



int main(int argc, char *argv[]){

    long einkommen[MAX];
    int tag[MAX], monat[MAX], jahr[MAX];


    int cont = anweisungen_anzeigen();

    if(cont == JA){
        daten_einlesen(tag, monat, jahr, einkommen);
        bericht_anzeigen(tag, monat, jahr, einkommen);
    }

    return EXIT_SUCCESS;
}

int anweisungen_anzeigen(void){
    int cont;
    printf("\n\n\nMit diesem Programm können Sie Einkommen und");
    printf("\nGeburtstage von bis zu 100 Personen eingeben. Anschließend");
    printf("\nwerden die Daten (inklusive Gesamtzahlungen und durchschnittlichem Einkommen) ausgegeben.\n");

    cont = fortfahren_funktion();
    return cont;
}

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

void daten_einlesen(int tag[], int monat[], int jahr[], long einkommen[]){
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
        scanf("%ld", &einkommen[ctr]);

        cont = fortfahren_funktion();
    }
    return;

   
}

void bericht_anzeigen(int tag[], int monat[], int jahr[], long einkommen[]){
    int y;//zum zählen
    int summe = 0;//für die gesamtsumme

    printf("\n\n\n\n\tGehaltsüberblick\n\t===================");

    for(y = 0; y < ctr; y++){
        printf("\nPerson %d: \n", y + 1);
        printf("\tGeburtstag: %d.%d.%d", tag[y], monat[y], jahr[y]);
        printf("\tEinkommen: %ld\n", einkommen[y]);

        summe += einkommen[y];
    }


    printf("\n\nJahreswerte : ");
    printf("\nDie Gesamtlohnzahlungen betragen: %d", summe);
    printf("\nDas Durchschnittseinkommen beträgt: %d", summe/ctr);

    printf("\n\n***ENDE DES BERICHTS***");
}