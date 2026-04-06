#include <stdio.h>

//funktionsprototypen

void func1(int);
void eins();
void zwei();
void andere();

int main(int argc, char *argv[]){
    int a;

    while(1){
        puts("\nGeben Sie einen Wert zwischen 1 und 10 an, 0 zum Beenden des Programms: ");
        scanf("%d", &a);
        if(a == 0) break;
        func1(a);
    }
    return 0;
}

void func1(int x){
    //funczeiger:
    void (*fPtr)(void);
    switch(x){
        case 1:
            fPtr = eins;
            break;
        case 2: 
            fPtr = zwei;
            break;
        default:
            fPtr = andere;
            break;
    }
    fPtr();
}

void eins(){
    puts("\nSie haben 1 gewählt");
}

void zwei(){
    puts("\nSie haben zwei gewählt");
}

void andere(){
    puts("\nSie haben iwas gewählt.");
}


/*
Ausgabe:
Geben Sie einen Wert zwischen 1 und 10 an, 0 zum Beenden des Programms: 
1

Sie haben 1 gewählt

Geben Sie einen Wert zwischen 1 und 10 an, 0 zum Beenden des Programms: 
2

Sie haben zwei gewählt

Geben Sie einen Wert zwischen 1 und 10 an, 0 zum Beenden des Programms: 
3

Sie haben iwas gewählt.

Geben Sie einen Wert zwischen 1 und 10 an, 0 zum Beenden des Programms: 
0
*/