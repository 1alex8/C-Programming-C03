// Beispiele für scanf

#include<stdio.h>

void loeschen(void);

int main(int argc, char *argv[]){

    int i1, i2;
    long l1;

    double d1;

    char puffer1[80], puffer2[80];

    //Mit dem Modigizierer l long interger und double Werte einlesen

    puts("Geben Sie einen Integer und eine Fließkomma zahl ein: "); 
    scanf("%ld %lf", &l1, &d1);
    printf("\nIhre Eingabe lautet: %ld und %lf.\n", l1, d1);
    puts("Der Formatstring von scanf() verwendete den Modifizierer l,");
    puts("um die Eingabe in long und double Werte zu speichern\n");

    loeschen();

    /*Aufsplittung der Eingabe durch Angabe der Feldlänge*/

    puts("Geben Sie einen Integer aus 5 Zahlen ein: ");
    scanf("%2d %3d", &i1, &i2);
    printf("\nIhre Eingabe lautet: %d und %d.\n", i1, i2);
    puts("Der Feldlängenspezifizierer in dem Formatstring von scanf()");
    puts("splittet Ihre Eingabe in zwei Werte auf.\n");

    loeschen();

    /*  Verwendet ein ausgeschlossenes Leerzeichen,
        um eine Eingabezeile beim Leerzeichen in
        2Strings aufzuteilen.
    */

    puts("Geben Sie ihren Vor- und Nachnamen ein: ");
    scanf("%[^ ]%s", puffer1, puffer2);
    printf("\nIhr Vorname lautet %s", puffer1);
    printf("\nIhr Nachname lautet %s\n", puffer2);
    puts("[^ ] in dem Formatstring von scanf() hat durch Ausschließen");
    puts("des Leerzeichens die Aufsplittung der Eingabe bewirkt");

    loeschen();

    return 0;
}

void loeschen(void){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}