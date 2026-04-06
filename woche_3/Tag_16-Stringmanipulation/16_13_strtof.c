/*
strtof / strtod verwandelt einen String in einen float / double variable
        und nutzt zur Fehlerbehandlung einen Pointer der auf den ersten Char zeig der nicht in eine Zahl umgewandelt werden konnte:

Prototyp:
        float strtof(const char* str, char **endptr);
        double strtod(const char* str, char **endptr);
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *input = "3.14abc";
    char *end;

    // atof: kein Hinweis auf das "abc"
    double d = atof(input);
    printf("atof:  %f\n", d);  // 3.140000 – aber "abc" wird stillschweigend ignoriert

    // strtof: endptr zeigt auf "abc"
    float f = strtof(input, &end);
    printf("strtof: %f\n", f); // 3.140000
    printf("Rest:   \"%s\"\n", end); // "abc"

    if (*end != '\0') {
        printf("Fehler: kein reiner Zahlenwert!\n");
    }

    return 0;
}