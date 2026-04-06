// hier nutzen wir die direkte rukursion um die fakulät einer Zahl zu berechnen!!
#include<stdio.h>
#include<stdlib.h>

unsigned long long fakultaet(unsigned long long);

int main(int argc, char *argv[]){

    unsigned long long x, f;

    printf("Geben Sie einen Wert zwischen 1 und 20 ein: ");
    scanf("%llu", &x);
    while (x < 1 || x > 20){
        printf("Geben Sie einen Wert zwischen 1 und 50 ein: ");
        scanf("%llu", &x);
    }

    f = fakultaet(x);
    printf("Die Fakultät der Zahl %llu ist %llu", x, f);


    return EXIT_SUCCESS;
}

unsigned long long fakultaet(unsigned long long a){
    if(a <= 1) return 1;
    a *= fakultaet(a - 1);
    return a;
}