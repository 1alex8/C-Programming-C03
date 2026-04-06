// Ließt einen String ein und gibt ihn direkt wieder aus

#include <stdio.h>

int main(int argc, char *argv[]){

    char puffer[256];

    puts(fgets(puffer, 256, stdin));

    return 0;
}