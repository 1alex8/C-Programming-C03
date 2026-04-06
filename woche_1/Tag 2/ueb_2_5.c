#include<stdio.h>
#include<string.h>

int main(int argc, char argv[]){
    char puffer[256];

    printf("Geben Sie ihren vollen Namen ein: ");
    fgets(puffer, sizeof(puffer), stdin);

    printf("Ihr Name enthält: %d Zeichen inkl. Leerzeichen", strlen(puffer));
    return 0;
}