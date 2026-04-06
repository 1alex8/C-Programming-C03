#include <stdio.h>
#include <stdlib.h>

char* read_string_dynamically() {
    size_t capacity = 16; // Wir starten mit Platz für 16 Zeichen
    size_t length = 0;
    
    // Initialen Speicher reservieren
    char* str = malloc(capacity * sizeof(char));
    if (str == NULL) {
        printf("Speicherzuweisung fehlgeschlagen!\n");
        return NULL;
    }

    int c;
    printf("Bitte Text eingeben (Enter zum Beenden):\n");
    
    // Zeichen für Zeichen einlesen, bis Enter (\n) oder Dateiende (EOF)
    while ((c = fgetc(stdin)) != '\n' && c != EOF) {
        str[length++] = (char)c;

        // Prüfen, ob wir das Limit erreichen (Wir brauchen noch 1 Byte für '\0')
        if (length + 1 >= capacity) {
            capacity *= 2; // Speicherkapazität verdoppeln
            
            // realloc aufrufen
            char* temp = realloc(str, capacity * sizeof(char));
            if (temp == NULL) {
                printf("Speichererweiterung fehlgeschlagen!\n");
                free(str); // Alten Speicher freigeben, um Lecks zu vermeiden
                return NULL;
            }
            str = temp; // Den neuen Pointer zuweisen
        }
    }

    // Den String am Ende vorschriftsmäßig mit Null terminieren
    str[length] = '\0'; 

    return str;
}

int main() {
    char* meinString = read_string_dynamically();
    
    if (meinString != NULL) {
        printf("Eingegebener String: %s\n", meinString);
        free(meinString); // Wichtig: Speicher am Ende wieder freigeben!
    }
    
    return 0;
}