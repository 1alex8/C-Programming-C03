#include<stdio.h>
#include<stdlib.h>

int const leave = 4;
int option_einlesen (void);

int main(int argc, char *argv[]){

    int option = 0, int_var;
    float float_var;
    unsigned uint_var;

    while(option != leave){

        option = option_einlesen();

        if(option == 1){
            puts("Geben Sie eine reelle Zahl (z.B. -123) ein: ");
            scanf("%d", &int_var);
        }else if(option == 2){
            puts("Geben Sie eine Fließkommazahl ein: ");
            scanf("%f", &float_var);
        }else if(option == 3){
            puts("Geben Sie eine vorzeichenlose Dezimalzahl ein: ");
            scanf("%u", &uint_var);
        }
    }

    printf("\nIhre Werte lauten: int: %d\tfloat: %f\tunsigned: %u\n", int_var, float_var, uint_var);

    return 0;
}

int option_einlesen(void){
    int option = 0;

    do{
        puts("1 - reele Zahl einlesen");
        puts("2 - Fließkomma einlesen");
        puts("3 - vorzeichenlose Dec einlesen");
        puts("4 - leave");
        scanf("%d", &option);
    }while(option < 1 || option > 4);

    return option;
}