#include <stdio.h>

int main(int argc, char *argv[]){

    char s[] = "Dies ist ein String. Er besteht aus 2 Sätzen.";

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '.'){
            s[i+1] = '\0';
            break;
        }
    }

    printf("Geänderter String: \"%s\"\n", s);

    return 0;
}