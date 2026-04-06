#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    const char* text = "Hallo UCRT64!";
    char* kopie = strdup(text); // funktioniert in ucrt64 GCC
    if (kopie) {
        printf("%s\n", kopie);
        free(kopie);
    }
    return 0;
}