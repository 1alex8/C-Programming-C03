/*
strstr(); : sucht nach dem ersten Vorkommen eines Strings in einem anderen String, wobei nach dem ganzen String und nicht nur nach den einzelnen Zeichen innerhalb des Strings gesucht wird.

Prototyp: char *strstr(char *haystack, char *needle);
*/

#include<stdio.h>
#include<string.h>

int main(){

    char *location, buffer1[80], buffer2[80];

    //Strings eingeben:
    printf("\nGeben Sie den ersten String ein, der durchsucht werden soll: ");
    fgets(buffer1, 100, stdin);
    buffer1[strlen(buffer1) - 1] = '\0';

    printf("\nGeben Sie den zweiten zu suchenden String ein: ");
    fgets(buffer2, 100, stdin);
    buffer2[strlen(buffer2) - 1] = '\0';

    location = strstr(buffer1, buffer2);

    if(location == NULL) printf("\nEs wurde keine Übereinstimmung gefunden.");
    else{
        printf("\n%s wurde an Position %d gefunden.", buffer2, (int)(location - buffer1));
    }

    return 0;
}

/*
Ausgabe:
Geben Sie den ersten String ein, der durchsucht werden soll: Alles klar auf der Andrea

Geben Sie den zweiten zu suchenden String ein: auf

auf wurde an Position 11 gefunden.
*/