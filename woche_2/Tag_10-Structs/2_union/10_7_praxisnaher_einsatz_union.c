#include <stdio.h>

#define CHARACTER 'C'
#define INTEGER 'I'
#define FLOAT 'F'

struct s_generisch{
    char typ;
    union u_shared{
        char c;
        int i;
        float f;
    } shared;
};

void ausgabe(struct s_generisch);

int main(int argc, char *argv[]){

    struct s_generisch var;

    var.typ = CHARACTER;
    var.shared.c = '$';
    ausgabe(var);

    var.typ = 'x';
    var.shared.i = 111;
    ausgabe(var);

    return 0;
}

void ausgabe(struct s_generisch general){
    printf("\nDer generische Wert ist...");
    switch(general.typ){
        case CHARACTER:
            printf("%c\n", general.shared.c);
            break;
        case INTEGER:
            printf("%d", general.shared.i);
            break;
        case FLOAT:
            printf("%.2f", general.shared.f);
            break;
        default:
            printf("Typ unbekannt: %c\n", general.typ);
            break;
    }
}