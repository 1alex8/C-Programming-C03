/*Ausgabe String mit puts()*/

#include<stdio.h>

int main(int argc, char * argv[]){
    //Deklariert und initialisiert einen Array von Zeigern:
    char *messages[5] = {"Dies", "ist", "eine", "kurze","Nachricht"};

    for(int i = 0; i < 5;){
        puts(messages[i++]);
    }
    puts("Und das das Ende");  
    return 0;
}