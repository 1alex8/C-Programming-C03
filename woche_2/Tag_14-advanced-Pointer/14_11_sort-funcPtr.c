// Ließt Strings von der Tastatur ein, sortiert diese
// in auf oder absteigender Reihenfolge
// und gibt sie auf dem Bildschirm aus

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 25
#define amount 100

int line_input(char *[]);
void sort(char *[], int, int);
void line_output(char*[], int);
int alpha(char *p1, char *p2);
int reverse(char *, char *);


int main(int argc, char *argv[]){

    int line_count, sort_type;
    char *lines[MAX];

    line_count = line_input(lines);
    if(line_count < 0) {
        fprintf(stderr, "\n\nFehler bei Speicherreservierung");
        exit(-1);
    }

    puts("\nGeben Sie 0 für umgekehrte oder 1 für alphabetische Reihenfolge an: ");
    scanf("%d", &sort_type);

    sort(lines, line_count, sort_type);
    line_output(lines, line_count);

    for(int i = 0; i < line_count; i++){
        free(lines[i]);
    }

    return 0;
}

int line_input(char *lines[]){
    int n = 0;
    char buffer[amount];
    puts("\nGeben Sie einzelne Zeilen ein; Leerzeile für Ende: ");
    while(n < MAX && (fgets(buffer, amount, stdin) != 0) && buffer[0] != '\n'){
        lines[n] = malloc(strlen(buffer) + 1);
        if(lines[n] == NULL) return -1;
        strcpy(lines[n++], buffer);
    }
    return n;
}

void sort(char *p[], int line_count, int sort_type){
    char *temp;
    //funktions pointer deklarierung
    int (*compare)(char *s1, char *s2);

    /*
    Initialisiere den Funktionspointer in abh. von sort type
    mit der zugehörigen Vergleichsfunktion.
    */

    compare = sort_type ? alpha : reverse;

    for(int i = 0; i < line_count; i++){
        for(int j = 0 ; j < (line_count - 1); j++){
            if(compare(p[j], p[j + 1]) > 0){
                temp = p[j];
                p[j] = p[j + 1];
                p[j+1] = temp;
            }
        }
    }
}

int alpha(char *p1, char *p2){
    //Alphabetischer Vergleich
    return strcmp(p1, p2);
}

int reverse(char *p1, char *p2){
    return strcmp(p2, p1);
}

void line_output(char *l[], int n){
    for(int i = 0; i < n ; i++){
        printf("\n%s", l[i]);
    }
}