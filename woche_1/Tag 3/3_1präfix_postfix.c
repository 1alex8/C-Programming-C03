#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv[]){

    int a, b;
    a = b = 5;

    printf("\nPost Prä\n");
    printf("%d\t%d\n", a--, --b);
    printf("%d\t%d\n", a--, --b);
    printf("%d\t%d\n", a--, --b);
    printf("%d\t%d\n", a--, --b);
    printf("%d\t%d\n", a--, --b);
    



    return 0;
}