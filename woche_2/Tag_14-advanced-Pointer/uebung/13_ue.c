#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *pos(char *, char);
void testMitWorten(void);

int main(int argc, char *argv[]){

    char *string = "Hello, World";

    char x = 'e';

    char *y = pos(string, x);

    if(y == NULL){
        fprintf(stderr, "Existiert nicht");
        exit(1);
    }

    printf("Der Pointer zeigt auf: %c\n", *y);

    testMitWorten();

    return 0;
}

char *pos(char *string, char x){
    
    char *loesung = strchr(string, (int)x);
}

void testMitWorten(void){
    char string[] = "Ein Teststring mit Worten";
    printf("%s\n",strchr(string, (int)'W'));
    printf("%s\n",strchr(string, (int)'T'));
}