// Korrektes Beispiel für ein switch anweißung, 12.5 ist shiiit
#include <stdio.h>

int main(int argc, char *argv[]){
    int antwort;
    puts("Geben Sie eine Zahl zwischen 1 und 5 ein: ");
    scanf("%d", &antwort);

    switch(antwort){
        case 0:
            break;
        case 1:
            printf("Ihre Eingabe lautet 1");
            break;
        case 2:
            printf("Ihre Eingabe lautet 2");
            break;
        case 3:
            printf("Ihre Eingabe lautet 3");
            break;
        case 4:
            printf("Ihre Eingabe lautet 4");
            break;
        case 5:
            printf("Ihre Eingabe lautet 5");
            break;
        default:
            printf("Du shit\n");
    }

    return 0;
}