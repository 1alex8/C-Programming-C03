#include <stdio.h>

int main(int argc, char *argv[]){

    char eingabe[40];
    printf("Geben Sie ihren gesamten Namen ein: ");
    fgets(eingabe, 40, stdin);

    printf("\n\nName: %s", eingabe);

    return 0;
}