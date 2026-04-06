#include<stdio.h>
#include<math.h>

int kubik (int);

int main(int argc, char *argv[]){

    int x, y;

    printf("Geben Sie einen Integer ein: ");
    scanf("%d", &x);

    y = kubik(x);

    printf("\nIhr würfel hat ein volumen von %d cm^3", y);

    return 0;
}

int kubik(int seite){
    int ergebnis;
    ergebnis = pow(seite, 3);
    return ergebnis;
    // hätte man auch nur : return (pow(seite, 3));
}