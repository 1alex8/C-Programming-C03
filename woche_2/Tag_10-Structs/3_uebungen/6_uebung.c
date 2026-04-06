#include<stdio.h>

struct daten{
    char string[21];
};

typedef struct{
    char adresse1[21];
    char adresse2[21];
    char stadt[26];
    char staat[11];
    char plz[7];
}DATENSATZ;

/*
Wenn ich das Unnamed weg will:

typedef struct datensatz_struct {  // Jetzt hat sie einen internen Namen
    char stadt[26];
    // ...
} DATENSATZ;

Muss aber nicht sein, weil man eh den Alias nutzt wie im folgenden gezeigt:
*/

DATENSATZ meineAdresse = {"Technikerschule", "Augsburg", "Augsburg", "Bayern", "878766"};