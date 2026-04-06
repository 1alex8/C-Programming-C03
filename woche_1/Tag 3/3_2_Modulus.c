#include<stdio.h>
#include<math.h>

const int SEK_PRO_MIN = 60;
const int SEK_PRO_STD = 3600;

int main(int argc, char *argv[]){
    unsigned int sekunden, stunden, minuten, min_rest, sek_rest;

    printf("Geben Sie eine Zeit in Sek ein: ");
    scanf("%d", &sekunden);

    stunden = sekunden / SEK_PRO_STD;
    minuten = sekunden / SEK_PRO_MIN;
    min_rest = minuten % SEK_PRO_MIN;
    sek_rest = sekunden % SEK_PRO_MIN;

    printf("%u Sekunden entsprechen: \n", sekunden);
    printf("%u h, %u m, %u s\n", stunden, min_rest, sek_rest);


    return 0;
}