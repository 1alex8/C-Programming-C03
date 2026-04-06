/*Übrig gebliebene Zeichen in stdin buffer mit fgets löschen*/

#include<stdio.h>
#include<stdlib.h>

#define NAME_LEN 20

void loeschen(void);// nicht nutzen 
void komplett_loeschen(void); //nutzen

int main(int argc, char *argv[]){

    int alter;
    char *name = malloc(NAME_LEN * sizeof(char));

    printf("\nGeben Sie ihr Alter ein: ");
    scanf("%d", &alter);

    loeschen();// Hier werden 100 Zeichen aus dem Input buffer genommen

    printf("Geben Sie ihren vollen Namen ein: ");

    fgets(name, NAME_LEN, stdin);

    komplett_loeschen();

    printf("\nName : %s, Alter: %d", name, alter);

    free(name);

    return 0;
}

void loeschen(void){
    char buffer[100];

    fgets(buffer, sizeof(buffer), stdin);

}

// Robusteres löschen: sollte man nutzen

void komplett_loeschen(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}