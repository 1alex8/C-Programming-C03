#include<stdio.h>
#include<string.h>

char str2[] = "abcdefghijklmnopqrstuvwxyz";

int main(int argc, char *argv[]){
    char str1[27];

    for(int i = 0; i < 27; i++){
        strcpy(str1, "");
        strncat(str1, str2, i);
        puts(str1);
    }
    return 0;
}

/*
ausgabe: 
a
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