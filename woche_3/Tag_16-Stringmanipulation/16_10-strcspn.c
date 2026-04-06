/*
strcspn: durchsucht einen String nach dem ersten Vorkommen eines  der Zeichen in einem zweiten String. 
        beginnt mit der Suche mit dem ersten Zeichen von s1 und sucht nach allen Zeichen, die in s2 enthalten sind.
        Beachten Sie dass die Funktion nicht nach dem String s2 sucht sondern nur nach den einzelnen Zeichen, die er enthält.
        Bei Übereinstimmung wird die Position des Zeichens in s1 zurückgegeben.

        Bei keiner Übereinstimmung wird der Wert von strlen(s1) zurückgegeben.
        Damit wird angezeigt das die erste Übereinstimmung das '\0' war.

Prototyp: size_t strcspn(char *s1, char *s2);
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    char buffer1[100], buffer2[100];
    size_t location;

    //Srings eingeben:
    printf("\nGeben Sie den ersten String ein, der durchsucht werden soll: ");
    fgets(buffer1, 100, stdin);
    buffer1[strlen(buffer1) - 1] = '\0';

    printf("\nGeben Sie den zweiten String mit den zusuchenden Zeichen ein: ");
    fgets(buffer2, 100, stdin);
    buffer2[strlen(buffer2) - 1] = '\0';

    location = strcspn(buffer1, buffer2);

    if(location == strlen(buffer1)){
        printf("\nEs wurden keine Übereinstimmungen gefunden");
    }else printf("\nErste Übereinstimmung an Position : %lld", location);

    return 0;
}
/*
Ausgabe:
Geben Sie den ersten String ein, der durchsucht werden soll: Alles klar auf der Andrea

Geben Sie den zweiten String mit den zusuchenden Zeichen ein: Das

Erste Übereinstimmung an Position : 4
*/