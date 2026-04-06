#include<stdio.h>

int menue_option(void);

int main(int argc, char *argv[]){
    int option;
    option = menue_option();
    printf("Sie haben die Menü-Option %d gewählt\n", option);
    return 0;
}

int menue_option(void){
    int auswahl = 0;

    do{
        printf("\n");
        printf("\n1. Datensatz hinzugügen");
        printf("\n2. Datensatz ändern");
        printf("\n3. Datensatz löschen");
        printf("\n4. Verlassen");
        printf("\n");
        printf("Geben Sie Ihre Wahl ein: ");
        scanf("%d", &auswahl);
    }while(auswahl < 1 || auswahl > 4);
}