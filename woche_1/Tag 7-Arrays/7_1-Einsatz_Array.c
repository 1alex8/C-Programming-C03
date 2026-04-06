#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    float ausgaben[12];

    for (int i = 0; i < 12; i++){
        printf("Ausgaben für %d.Monat: ", i+1);
        scanf("%f", &ausgaben[i]);
    }

    for(int j = 0; j < 12; j++){
        printf("%d.Monat = %f Eur\n", j+1, ausgaben[j]);
    }

    return 0;
}