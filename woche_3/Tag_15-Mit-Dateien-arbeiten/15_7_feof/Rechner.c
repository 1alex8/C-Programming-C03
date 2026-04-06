#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    if(argc != 4){
        printf("Nur x operant y erlaubt!!");
        return 1;

    }

    float x,y,z;
    char op = *argv[2];
    char *ptr1;
    char *ptr2;

    x = strtof(argv[1], &ptr1);
    y = strtof(argv[3], &ptr2);

    switch (op){
        case '+':
            z = x + y;
            break;
        case '-':
            z = x - y;
            break;
        case '*':
            z = x * y;
            break;
        case '/':
            z = x / y;
            break;
        case ':':
            z = x / y;
            break;
        case '%':
            z = (int)x % (int)y;
            break;
        default:
            printf("Nur echte operatoren erlaubt!!!");
            return 1;
    }

    printf("%f %c %f = %f", x, op, y, z);


    return EXIT_SUCCESS;
}