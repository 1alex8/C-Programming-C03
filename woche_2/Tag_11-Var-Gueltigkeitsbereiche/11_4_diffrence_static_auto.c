/*Beispiel für auto und static Variablen*/
// Vars sind standartmäßig auto var_type var;

#include <stdio.h>

void func1(void);

int main(int argc, char *argv[]){

    for(int i = 0; i < 20; i++){
        printf("In Durchlauf %d: ", i);
        func1();
    }

    return 0;
}

void func1(void){
    static int x = 0;
    int y = 0;

    printf("x = %d, y = %d\n", x++, y++);
}

/*
Ausgabe: 


In Durchlauf 0: x = 0, y = 0
In Durchlauf 1: x = 1, y = 0
In Durchlauf 2: x = 2, y = 0
In Durchlauf 3: x = 3, y = 0
In Durchlauf 4: x = 4, y = 0
In Durchlauf 5: x = 5, y = 0
In Durchlauf 6: x = 6, y = 0
In Durchlauf 7: x = 7, y = 0
In Durchlauf 8: x = 8, y = 0
In Durchlauf 9: x = 9, y = 0
In Durchlauf 10: x = 10, y = 0
In Durchlauf 11: x = 11, y = 0
In Durchlauf 12: x = 12, y = 0
In Durchlauf 13: x = 13, y = 0
In Durchlauf 14: x = 14, y = 0
In Durchlauf 15: x = 15, y = 0
In Durchlauf 16: x = 16, y = 0
In Durchlauf 17: x = 17, y = 0
In Durchlauf 18: x = 18, y = 0
In Durchlauf 19: x = 19, y = 0
*/