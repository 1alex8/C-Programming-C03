#include <stdio.h>

/*
    Dieses Programm dient nur dazu,
    argc und argv verständlich zu erklären.
*/

int main(int argc, char *argv[])
{
    /*
        Die Parameter der main-Funktion:

        argc  -> "argument count"
                 Anzahl der übergebenen Argumente

        argv  -> "argument vector"
                 Array von Strings (Zeichenketten),
                 das alle Argumente enthält
    */


    printf("Erklärung von argc und argv\n\n");

    /*
        argc enthält immer mindestens den Wert 1,
        weil der Programmname selbst als erstes
        Argument gezählt wird.
    */

    printf("Anzahl der Argumente (argc): %d\n\n", argc);


    /*
        argv ist ein Array von Strings.

        Beispiel:
        Wenn das Programm so gestartet wird:

            programm.exe test.txt hallo

        dann enthält argv:

        argv[0] = "programm.exe"
        argv[1] = "test.txt"
        argv[2] = "hallo"

        und argc wäre 3
    */


    printf("Inhalt von argv:\n");

    /*
        Mit dieser Schleife geben wir alle
        Argumente einzeln aus.
    */

    for(int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }


    /*
        Typische Verwendung in echten Programmen:

        Man prüft zuerst, ob genug Argumente
        übergeben wurden.
    */

    if(argc < 2)
    {
        printf("\nEs wurde kein zusätzliches Argument übergeben.\n");
        printf("Beispielaufruf: programm.exe datei.txt\n");
    }
    else
    {
        printf("\nEs wurde mindestens ein Argument übergeben.\n");
        printf("Das erste echte Argument ist: %s\n", argv[1]);
    }


    /*
        Zusammenfassung:

        argc -> sagt WIE VIELE Argumente es gibt
        argv -> enthält die Argumente selbst
    */

    return 0;
}
