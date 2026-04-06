#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct eintrag {
    char vname[20];
    char nname[20];
    char telefon[20];
};

int main() {
    struct eintrag *liste = NULL;
    int anzahl = 0;
    int wahl;
    const char *dateiname = "telefonbuch.bin";

    // --- PHASE 1: DATEN BEIM START LADEN ---
    FILE *f_load = fopen(dateiname, "rb");
    if (f_load != NULL) {
        fread(&anzahl, sizeof(int), 1, f_load); // Zuerst die Anzahl lesen
        if (anzahl > 0) {
            liste = malloc(anzahl * sizeof(struct eintrag)); // Speicher für alle Einträge reservieren
            fread(liste, sizeof(struct eintrag), anzahl, f_load); // Alle Einträge auf einmal lesen
        }
        fclose(f_load);
        printf("%d Eintraege aus Datei geladen.\n", anzahl);
    } else {
        printf("Keine bestehende Datei gefunden. Starte mit leerem Telefonbuch.\n");
    }

    // --- PHASE 2: DAS HAUPTMENÜ ---
    do {
        printf("\n======= TELEFONBUCH =======\n");
        printf("1 - Neuen Eintrag hinzufuegen\n");
        printf("2 - Eintrag suchen\n");
        printf("3 - Eintrag loeschen\n");
        printf("4 - Alle Eintraege anzeigen\n");
        printf("0 - Beenden und Speichern\n");
        printf("===========================\n");
        printf("Ihre Wahl: ");
        
        // Eingabe prüfen, um Endlosschleifen bei falscher Eingabe zu vermeiden
        if (scanf("%d", &wahl) != 1) {
            while(getchar() != '\n'); // Eingabepuffer leeren
            wahl = -1;
        }

        switch (wahl) {
            case 1: { // HINZUFÜGEN
                anzahl++;
                liste = realloc(liste, anzahl * sizeof(struct eintrag));
                
                printf("\n--- Neuer Eintrag ---\n");
                printf("Vorname: ");  scanf("%19s", liste[anzahl-1].vname);
                printf("Nachname: "); scanf("%19s", liste[anzahl-1].nname);
                printf("Telefon: ");  scanf("%19s", liste[anzahl-1].telefon);
                printf("-> Eintrag hinzugefuegt!\n");
                break;
            }
            case 2: { // SUCHEN
                char suchname[20];
                int gefunden = 0;
                printf("\nNachname suchen: ");
                scanf("%19s", suchname);
                
                for (int i = 0; i < anzahl; i++) {
                    if (strcmp(liste[i].nname, suchname) == 0) {
                        printf("Gefunden [%d]: %s %s, Tel: %s\n", i+1, liste[i].vname, liste[i].nname, liste[i].telefon);
                        gefunden = 1;
                    }
                }
                if (!gefunden) printf("-> Kein Eintrag gefunden.\n");
                break;
            }
            case 3: { // LÖSCHEN
                char loeschname[20];
                int index = -1;
                
                printf("\nWelchen Nachnamen moechten Sie loeschen? ");
                scanf("%19s", loeschname);
                
                // 1. Eintrag suchen
                for (int i = 0; i < anzahl; i++) {
                    if (strcmp(liste[i].nname, loeschname) == 0) {
                        index = i;
                        break; // Wir löschen den ersten Treffer
                    }
                }
                
                if (index != -1) {
                    // 2. Lücke schließen (alle nachfolgenden Elemente nach vorne schieben)
                    for (int j = index; j < anzahl - 1; j++) {
                        liste[j] = liste[j+1];
                    }
                    
                    // 3. Speicher verkleinern
                    anzahl--;
                    if (anzahl > 0) {
                        liste = realloc(liste, anzahl * sizeof(struct eintrag));
                    } else {
                        free(liste); // Wenn die Liste leer ist, Speicher ganz freigeben
                        liste = NULL;
                    }
                    printf("-> Eintrag erfolgreich geloescht!\n");
                } else {
                    printf("-> Name nicht gefunden.\n");
                }
                break;
            }
            case 4: { // ANZEIGEN
                printf("\n--- Alle Kontakte (%d) ---\n", anzahl);
                if (anzahl == 0) printf("Das Telefonbuch ist leer.\n");
                for (int i = 0; i < anzahl; i++) {
                    printf("%d: %s %s (%s)\n", i+1, liste[i].vname, liste[i].nname, liste[i].telefon);
                }
                break;
            }
            case 0: // BEENDEN
                printf("\nSpeichere Daten und beende Programm...\n");
                break;
            default:
                printf("-> Ungueltige Eingabe. Bitte eine Zahl von 0 bis 4 waehlen.\n");
        }

    } while (wahl != 0);


    // --- PHASE 3: SPEICHERN BEIM BEENDEN ---
    FILE *f_save = fopen(dateiname, "wb");
    if (f_save != NULL) {
        fwrite(&anzahl, sizeof(int), 1, f_save);
        if (anzahl > 0) {
            fwrite(liste, sizeof(struct eintrag), anzahl, f_save);
        }
        fclose(f_save);
    } else {
        printf("FEHLER: Konnte Datei zum Speichern nicht oeffnen!\n");
    }

    // Am Ende immer den Speicher aufräumen
    if (liste != NULL) {
        free(liste);
    }

    return 0;
}