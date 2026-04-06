#include<stdio.h>


int main(int argc, char *argv[]){

    float var = 69.420;
    float *pvar = &var;
    float **ppvar = &pvar;

    printf("\n%.3f; Variable", var);
    printf("\n%.3f; ptr->var", *pvar);
    printf("\n%.3f; ptr->ptr->var", **ppvar);
    return 0;
}

/*
Ausgabe:
69.420; Variable
69.420; ptr->var
69.420; ptr->ptr->var
*/