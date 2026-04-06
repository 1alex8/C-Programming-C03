#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct kontakte{
    char name[50];
    char adresse[60];
    struct kontakte *next;
};

typedef struct kontakte KONTAKTE;
typedef KONTAKTE *kontaktzgr;

int main(int argc, char *argv[]){
    kontaktzgr head = NULL;
    kontaktzgr neu = NULL;
    kontaktzgr aktuell = head;
    kontaktzgr temp = NULL;

    return;
}