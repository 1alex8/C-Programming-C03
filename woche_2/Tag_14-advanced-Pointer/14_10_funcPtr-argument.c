// Einen Funktionszeiger als Argument übergeben
#include <stdio.h>
#include <stdlib.h>

//funktionsprototypen

void func1(void (*)(void));
void eins();
void zwei();
void andere();

int main(int argc, char *argv[]){
    int a;

    void (*fPtr)(void);

    while(1){
        puts("\nGeben Sie einen Wert zwischen 1 und 10 an, 0 zum Beenden des Programms: ");
        scanf("%d", &a);
        
        switch(a){
            case 1:
                fPtr = eins;
                break;
            case 2: 
                fPtr = zwei;
                break;
            case 0:
                exit(0);
                break;
            default:
                fPtr = andere;
                break;
        }
        func1(fPtr);
    }
    return 0;
}

void func1(void (*x)(void)){
   x();
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