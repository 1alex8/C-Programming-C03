/*
strcat(); verbindet String 1 mit einer Kopie von String 2 und verschiebt das '\0' ans Ende von String 1 der mit Kopie von String 1 erweitert wurde.

Prototyp char* strcat(char *s1, char * s2);

Achtung es muss genügend Speicher für s1 reserviert sein um s1 und s2 zu speichern.
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){

    char s1[27] = "a";
    char s2[2];

    int n;

    //Schreib Nullzeichen an das Ende von str2:
    s2[1] = '\0';

    for(n = 98; n < 123; n++){
        s2[0] = n;
        strcat(s1, s2);
        puts(s1);
    }

    return 0;
}

/*
Ausgabe: 
ab
abc
abcd
abcde
abcdef
abcdefg
abcdefgh
abcdefghi
abcdefghij
abcdefghijk
abcdefghijkl
abcdefghijklm
abcdefghijklmn
abcdefghijklmno
abcdefghijklmnop
abcdefghijklmnopq
abcdefghijklmnopqr
abcdefghijklmnopqrs
abcdefghijklmnopqrst
abcdefghijklmnopqrstu
abcdefghijklmnopqrstuv
abcdefghijklmnopqrstuvw
abcdefghijklmnopqrstuvwx
abcdefghijklmnopqrstuvwxy
abcdefghijklmnopqrstuvwxyz
*/