#include<stdio.h>
#include<stdlib.h>

struct koord{
    int x;
    int y;
};

struct rechteck{
    struct koord obenlinks;
    struct koord untenrechts;
} feld1;

int main(int argc, char *argv[]){

    int laenge, hoehe;
    long area;

    printf("Geben sie die x-Koordinate für oben links ein: ");
    scanf("%d", &feld1.obenlinks.x);

    printf("Geben sie die y-Koordinate für obenlinks ein: ");
    scanf("%d", &feld1.obenlinks.y);


    printf("Geben Sie die x-Koordinate für unten rechts ein: ");
    scanf("%d", &feld1.untenrechts.x);

    printf("Geben Sie die y-Koordinate für unten rechts ein: ");
    scanf("%d", &feld1.untenrechts.y);

    // Länge und höhe berechnen

    laenge = feld1.obenlinks.x - feld1.untenrechts.x;
    hoehe = feld1.untenrechts.y - feld1.obenlinks.y;

    //Fläche berechnen

    area = laenge * hoehe;

    printf("Die Fläche des rechtecks ist: %ld", area);

    return 0;
}