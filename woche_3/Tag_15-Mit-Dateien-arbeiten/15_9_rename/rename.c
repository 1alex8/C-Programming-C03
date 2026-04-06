#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    char oldname[100];
    char newname[100];
    int c;

    printf("\nGeben Sie den alten Namen ein: ");
    scanf("%80s", oldname);
    while((c = getchar()) != '\n' && c != EOF);
    printf("Geben Sie den neuen Namen ein: ");
    fgets(newname, 100, stdin);
    newname[strlen(newname) - 1] = '\0';

    if(rename(oldname, newname) == 0){
        printf("%s wurde in %s umbenannt", oldname, newname);
    }else fprintf(stderr, "Fehler beim umbenennen");

    return 0;
}