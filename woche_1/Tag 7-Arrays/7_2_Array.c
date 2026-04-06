#include <stdio.h>
#include <stdlib.h>

#define MAX_NOTE 100
#define STUDENTEN 10

int main(int argc, char * argv[]){

    int noten[STUDENTEN];
    int idx;
    int gesamt = 0;

    for (idx = 0; idx < STUDENTEN; idx++){
        printf("Geben Sie die Note von Person %d ein : ", idx + 1);
        scanf("%d", &noten[idx]);

        while(noten[idx] > MAX_NOTE){
            printf("Die beste Note ist : %d\nGeben Sie die beste Note ein: ", MAX_NOTE);
            scanf("%d", &noten[idx]);

        }
        gesamt += noten[idx];
    }

    printf("Der Durchschnittswert beträgt %d\n", (gesamt / STUDENTEN));
    

    return 0;
}