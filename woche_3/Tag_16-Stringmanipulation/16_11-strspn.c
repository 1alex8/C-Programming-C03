/*
strspn(); : verhält sich gleich wie strcspn mit dem Unterschied das es die Position des Ersten Zeichens zurückgibt,
            dass nicht mit einem Zeichen aus accept übereinstimmt.

            Mit anderen Worten es liefert die Länge des ersten Abschnitts zurück, der ganz aus Zeichen besteht, die in accept enthalten sind.

            Bei keiner Übereinstimmung lautet der Rückgabewert 0
            wenn komplett gleich size_t = strlen(buffer 1)

Prototyp: size_t strspn(char *string, char *accept);
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

    location = strspn(buffer1, buffer2);

    if(location == 0){
        printf("\nKeine Übereinstimmung");
    }else printf("\nDie Zeichen sind gleich bis Position : %lld", location);

    return 0;
}

/*
Ausgabe:
Geben Sie den ersten String ein, der durchsucht werden soll: Alles klar auf der Andrea?

Geben Sie den zweiten String mit den zusuchenden Zeichen ein: Alles klar oder

Die Zeichen sind gleich bis Position : 12
*/