// strlen(); Ermittelt die Anzahl der im String enhaltenen Elemente.
// prototyp: size_t strlen(char *str);
// Erkläreung : size_t =  unsigned long long, ab und zu auch unsigned long. bei mir long long
// Bibliothek: string.h

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    size_t length ;
    char buffer[100];

    while(1){
        puts("\nGeben Sie einen String ein, beenden mit Enter: ");
        fgets(buffer, 100, stdin);

        length = strlen(buffer) - 1;

        if(length > 1){
            printf("\nDie Zeile ist %llu Zeichen lang", length);
        }else break;
    }

    return 0;
}

/*
Ausgabe: 
Geben Sie einen String ein, beenden mit Enter: 
Hallo

Die Zeile ist 5 Zeichen lang
Geben Sie einen String ein, beenden mit Enter: 
Wow

Die Zeile ist 3 Zeichen lang
Geben Sie einen String ein, beenden mit Enter: 
Hallo du 

Die Zeile ist 8 Zeichen lang
Geben Sie einen String ein, beenden mit Enter: 
123 567 9  

Die Zeile ist 9 Zeichen lang
*/