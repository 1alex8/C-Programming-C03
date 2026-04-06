#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("Hallo!\n");
    int count;
    for(count = 0; count < 10; count++){
        printf("Zähler = %d \n", count);
    }

    printf("\nEnde\n");
    
    return 0;
}