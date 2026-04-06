/*Implementierung einer linked List*/

#include<stdio.h>
#include<stdlib.h>

#ifndef NULL
    #define NULL 0
#endif

//Datenstruktur der Liste

struct list{
    int ch;//Verwende int zum aufnehmen der Zeichen
    struct list *next;// Zeiger auf das nächste Element
};

typedef struct list LIST;
typedef LIST *listzgr;

//funktionsprototypen

listzgr input(int, listzgr);
void output(listzgr);
void free_list(listzgr);

int main(int argc, char *argv[]){
    listzgr first = NULL;
    int ch;
    int  trash;

    //Liste aus 5 Elementen bauen
    for(int i = 0; i < 5; i++){
        ch = 0;
        printf("\nGeben Sie Zeichen %d ein,", i +1);

        do{
            printf("Muss zwischen a und z liegen: ");
            ch = getc(stdin);
            while((trash = getchar()) != '\n' && trash != EOF);
        }while((ch < 'a' || ch > 'z') &&(ch < 'A' || ch > 'Z'));

        first = input(ch, first);
    }


    output(first);
    free_list(first);
    return 0;
}

/*
Fuktion: input()
Zweck: fügt ein Element in die Liste ein
Parameter: 
    ch : abzuspeicherndes Zeichen
    first: Adresse des ursprüunglichen Head Zeigers
*/
listzgr input(int ch, listzgr first){
    listzgr new = NULL;
    listzgr temp = NULL;
    listzgr prev = NULL;

    // Speicher reservieren
    new = (listzgr)malloc(sizeof(LIST));
    if(new == NULL) {
        printf("Speicherallokation fehlgeschlagen");
        exit(1);
    }

    //Links für neues element setzten
    new->ch = ch;
    new->next = NULL;

    if(first == NULL){
        first = new;
        new->next = NULL;
    }else{
        //Vor dem ersten Element
        if(new->ch < first->ch){
            new->next = first;
            first = new;
        }
        else{
            temp = first->next;
            prev = first;

            //Wo wird das Element eingefrügt:
            if(temp == NULL){
                prev->next = new;
            }
            else{
                //in der Mitte einfügen:
                while(temp->next != NULL){
                    if(new->ch < temp->ch){
                        new->next = temp;
                        if(new->next != prev->next){
                            fprintf(stderr, "Fehler");
                            getc(stdin);
                            exit(0);
                        }
                        prev->next = new;
                        break;//while beenden
                    }
                    else{
                        temp = temp->next;
                        prev = prev->next;
                    }
                }
                //AmEnde einfügen?
                if(temp->next == NULL){
                    if(new->ch < temp->ch){//vor Ende
                        new->next = temp;
                        prev->next = new;
                    }else{
                        //Am Ende
                        temp->next = new;
                        new->next = NULL;
                    }
                }
            }
        }
    }
    return first;
}

//Liste ausgeben:

void output(listzgr first){

    listzgr aktuell = NULL;
    int i = 1;
    printf("\n\nElement-Adr   Position   Daten    Nachfolger\n");
    printf("========= ============ ===========  =============\n");
    aktuell = first;
    while(aktuell != NULL){
        printf("  %X   ", aktuell);
        printf("    %2d       %c", i++, aktuell->ch);
        printf("    %X\n", aktuell->next);
        aktuell = aktuell->next;
    }

}


void free_list(listzgr first){
    listzgr aktuell, next;
    aktuell= first;

    while(aktuell != NULL){
        next = aktuell->next;
        free(aktuell);
        aktuell = next;
    }
}