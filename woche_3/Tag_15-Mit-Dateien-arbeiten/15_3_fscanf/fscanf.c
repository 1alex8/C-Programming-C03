#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    float f1, f2, f3, f4, f5;
    FILE *fp;

    if((fp = fopen("eingabe.txt", "r")) == NULL){
        fprintf(stderr, "Fehler beim öffnen von Eingabe.txt");
        exit(1);
    }
    fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);

    printf("Die Werte lauten: %.2f %.2f %.2f %.2f %.2f", f1, f2, f3, f4, f5);

    fclose(fp);

    return 0;
}