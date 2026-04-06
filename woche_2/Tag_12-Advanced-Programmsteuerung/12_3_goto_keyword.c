#include <stdio.h>

// nutze goto nur im äußersten Notfall

int main(int argc, char *argv[]){
    int choice;

    start:
    puts("Geben Sie eine Zahl zwischen 0 und 10 ein: ");
    scanf("%d", &choice);

    if(choice < 0 || choice > 10) {
        goto start;
    }else if(choice == 0){
        goto location0;
    }else if(choice == 1){
        goto location1;
    }else goto location2;


    location0:
    puts("Ihre Eingabe war 0");
    goto ende;

    location1:
    puts("Ihre Eingabe war 1");
    goto ende;

    location2:
    puts("Ihre Eingabe war etwas 2 - 10");
    
    ende:
    return 0;
}