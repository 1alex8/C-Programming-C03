#include<stdio.h>
#include<limits.h>

int main(int argc, char *argv[]){

    printf("Signed  : Groesse %20s %22s\n", "MIN", "MAX");
    printf("char    : %d %22d %22d\n", (int)sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("short   : %d %22d %22d\n", (int)sizeof(int), INT_MIN, INT_MAX);
    printf("long    : %d %22ld %22ld\n", (int)sizeof(long), LONG_MIN, LONG_MAX);
    printf("\n\n");
    printf("Unsigned: Groesse %20s %22s\n", "MIN", "MAX");
    printf("char    : %d %22d %22u\n", (int)sizeof(unsigned char), 0, UCHAR_MAX);
    printf("short   : %d %22d %22u\n", (int)sizeof(unsigned int), 0, UINT_MAX);
    printf("long    : %d %22ld %22lu\n", (int)sizeof(unsigned long), 0, ULONG_MAX);
    printf("\n\n");

    printf("single prec. float: %d\n", (int)sizeof(float));
    printf("double prec. float: %d\n", (int)sizeof(double));



    return 0;
}