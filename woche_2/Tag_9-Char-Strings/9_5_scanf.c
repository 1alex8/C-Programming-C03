#include<stdio.h>

int main(int argc, char *argv[]){

    char nname[98], vname[98];

    int count, id_num;

    puts("Geben Sie, durch Leerzeichen getrennt, Nachname , Vorname und Kennnummer ein.");
    puts("Dann Enter drücken:");

    count = scanf("%s%s%d", nname, vname, &id_num);

    printf("%d Elemente wurden eingegeben: %s %s %d\n", count, nname, vname, id_num);

    return 0;
}