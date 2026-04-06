#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

int main(int argc, char *argv[]){

    int arr1[SIZE], arr2[SIZE];
    FILE *fp;

    //Initialisierung von arr1
    for(int i = 0; i < SIZE; i++){
        *(arr1 + i) = 2 * i;
    }

    if((fp = fopen("direkt_binaer.txt", "wb")) == NULL){
        fprintf(stderr, "Fehler beim Öffnen");
        exit(1);
    }

    //arr1 in datei speichern.

    if(fwrite(arr1, sizeof(int), SIZE, fp) != SIZE){
        fprintf(stderr, "Fehler beim schreiben");
        exit(1);
    }

    fclose(fp);

    if((fp = fopen("direkt_binaer.txt", "rb")) == NULL){
        fprintf(stderr, "Fehler beim öffnen zum lesen");
        exit(1);
    }

    //Liest datei in arr2 ein

    if(fread(arr2, sizeof(int), SIZE, fp) != SIZE){
        fprintf(stderr, "Fehler beim lesen der Datei");
        exit(2);
    }

    fclose(fp);

    for(int i = 0; i < SIZE; i++){
        printf("\n%d = %d", *(arr1 + i),*(arr2 + i));
    }

    return 0;
}