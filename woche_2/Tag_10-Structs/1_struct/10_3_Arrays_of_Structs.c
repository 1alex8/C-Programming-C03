#include<stdio.h>

struct eintrag{
    char vname[20];
    char nname[20];
    char telefon[20];
};

struct eintrag liste[4];

int main(int argc, char *argv[]){

    for (int i = 0; i < 4; i++){
        printf("\nGeben Sie ihren vollen Namen ein: ");
        scanf("%19s%19s", liste[i].vname, liste[i].nname);
        printf("Geben Sie ihre Telefonnummer ein: ");
        scanf("%19s", liste[i].telefon);
    }

    printf("\n\n");
    for(int i = 0; i < 4; i++){
        printf("%s %s", liste[i].vname, liste[i].nname);
        printf("\t\t Telefon: %s\n", liste[i].telefon);
    }

    return 0;
}