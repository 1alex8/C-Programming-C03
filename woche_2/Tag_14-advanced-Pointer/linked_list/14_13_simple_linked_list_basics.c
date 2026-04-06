/*
Veranschaulicht die Basics und den grundlegenden Einsatz einer einfachen LinkedList
es gäbe auch noch binaryTrees und doubly Linkedlists(hier aber nicht genutzt)
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
Die Struktur für die Listendaten
*/

struct daten{
    char name [40];
    struct daten *next;
};

/*
Definiere typedefs für die Struktur und die darauf gerichteten Zeiger
*/
typedef struct daten PERSON;
typedef PERSON *LINK;

int main(int argc, char *argv[]){

    /*
    Zeiger für Head, neues und aktuelles Element
    */
    LINK head = NULL;
    LINK neu = NULL;
    LINK aktuell = NULL;
    LINK TEMP = NULL;

    /*
    Erstes Listenelement einfügen. Wir gehen nicht davon aus das die Liste leer ist.
    obwohl dies in diesem Demo Programm der Fall ist.
    */
    neu = (LINK)malloc(sizeof(PERSON));
    neu -> next = head;
    head = neu;
    strcpy(neu->name, "Alexander");

    /*
    Element am Ende der Liste einfügen. Wir gehen davon aus,
    dass das Element mindestens einen Node enthält.
    */
    aktuell = head;
    while(aktuell->next !=NULL){
        aktuell = aktuell->next;
    }
    neu =(LINK)malloc(sizeof(PERSON));
    aktuell->next = neu;
    neu->next = NULL;
    strcpy(neu->name, "Belli");


    /*Ein neues Element an der zweiten Position einfügen*/
    neu = (LINK)malloc(sizeof (PERSON));
    neu->next = head->next;
    head->next = neu;
    strcpy(neu->name, "Papa");

    // neues Element zwischen letztem und vorletztem einfügen
    neu = (LINK)malloc(sizeof(PERSON));
    aktuell = head;
    while(aktuell->next->next != NULL){
        aktuell = aktuell->next;
    }
    neu->next = aktuell->next;
    aktuell->next = neu;
    strcpy(neu->name, "MAMA");


    //Alle Datenelement der Reiehen ahc ausgeben
    aktuell = head;
    while(aktuell != NULL){
        printf("\n%s", aktuell->name);
        aktuell = aktuell->next;
    }
    printf("\n");

    // nodes freeen

    aktuell = head;

    while(aktuell != NULL){
        TEMP = aktuell;
        aktuell = aktuell->next;
        free(TEMP);
    }



    return 0;
}