#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char *eingabe = malloc(40 * sizeof(char));
    printf("Geben Sie ihren gesamten Namen ein: ");
    fgets(eingabe, 40, stdin);

    printf("\n\nName: %s", eingabe);

    free(eingabe);

    return 0;
}