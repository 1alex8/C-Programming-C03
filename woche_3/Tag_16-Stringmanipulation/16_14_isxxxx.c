/*
isxxxx functions return true or false: 

Wichtiger Hinweis zu den Rückgabewerten: Die is...-Funktionen geben nicht zwingend 1 zurück, 
wenn die Bedingung zutrifft — nur einen Wert != 0. 
Deshalb prüft man sie immer mit if (isdigit(c)) statt if (isdigit(c) == 1).
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    /* Testzeichen fuer alle Demonstrationen */
    char buchstabe_klein = 'g';
    char buchstabe_gross = 'G';
    char ziffer          = '5';
    char leerzeichen     = ' ';
    char sonderzeichen   = '!';
    char tab             = '\t';
    char hex_buchstabe   = 'a';  /* gueltige Hex-Ziffer */

    printf("=== ctype.h Funktionen Demo ===\n\n");

    /* --------------------------------------------------
     * isalnum(c)
     * Prueft, ob c ein alphanumerisches Zeichen ist,
     * also ein Buchstabe (a-z, A-Z) oder eine Ziffer (0-9).
     * Gibt einen Wert != 0 (wahr) oder 0 (falsch) zurueck.
     * -------------------------------------------------- */
    printf("isalnum('%c') = %d  (Buchstabe oder Ziffer? Ja)\n",
           buchstabe_klein, isalnum(buchstabe_klein));
    printf("isalnum('%c') = %d  (Buchstabe oder Ziffer? Nein)\n\n",
           sonderzeichen,  isalnum(sonderzeichen));

    /* --------------------------------------------------
     * isalpha(c)
     * Prueft, ob c ein Buchstabe ist (a-z oder A-Z).
     * Ziffern und Sonderzeichen geben 0 zurueck.
     * -------------------------------------------------- */
    printf("isalpha('%c') = %d  (Buchstabe? Ja)\n",
           buchstabe_klein, isalpha(buchstabe_klein));
    printf("isalpha('%c') = %d  (Buchstabe? Nein)\n\n",
           ziffer, isalpha(ziffer));

    /* --------------------------------------------------
     * iscntrl(c)
     * Prueft, ob c ein Steuerzeichen ist (ASCII 0-31 und 127).
     * Dazu gehoeren z.B. '\n', '\t', '\r', '\0' usw.
     * -------------------------------------------------- */
    printf("iscntrl('\\t') = %d  (Steuerzeichen? Ja)\n",
           iscntrl(tab));
    printf("iscntrl('%c')  = %d  (Steuerzeichen? Nein)\n\n",
           buchstabe_klein, iscntrl(buchstabe_klein));

    /* --------------------------------------------------
     * isdigit(c)
     * Prueft, ob c eine dezimale Ziffer ist (0-9).
     * Buchstaben und Sonderzeichen geben 0 zurueck.
     * -------------------------------------------------- */
    printf("isdigit('%c') = %d  (Ziffer 0-9? Ja)\n",
           ziffer, isdigit(ziffer));
    printf("isdigit('%c') = %d  (Ziffer 0-9? Nein)\n\n",
           buchstabe_klein, isdigit(buchstabe_klein));

    /* --------------------------------------------------
     * isgraph(c)
     * Prueft, ob c ein druckbares Zeichen ist, das KEIN
     * Leerzeichen ist. Gibt 0 fuer Leerzeichen und
     * Steuerzeichen zurueck.
     * -------------------------------------------------- */
    printf("isgraph('%c') = %d  (Druckbar & kein Leerzeichen? Ja)\n",
           buchstabe_klein, isgraph(buchstabe_klein));
    printf("isgraph(' ')  = %d  (Druckbar & kein Leerzeichen? Nein)\n\n",
           isgraph(leerzeichen));

    /* --------------------------------------------------
     * islower(c)
     * Prueft, ob c ein Kleinbuchstabe ist (a-z).
     * Grossbuchstaben, Ziffern usw. geben 0 zurueck.
     * -------------------------------------------------- */
    printf("islower('%c') = %d  (Kleinbuchstabe? Ja)\n",
           buchstabe_klein, islower(buchstabe_klein));
    printf("islower('%c') = %d  (Kleinbuchstabe? Nein)\n\n",
           buchstabe_gross, islower(buchstabe_gross));

    /* --------------------------------------------------
     * isprint(c)
     * Prueft, ob c ein druckbares Zeichen ist.
     * Im Gegensatz zu isgraph() zaehlt das Leerzeichen hier AUCH.
     * Steuerzeichen geben 0 zurueck.
     * -------------------------------------------------- */
    printf("isprint(' ')  = %d  (Druckbar inkl. Leerzeichen? Ja)\n",
           isprint(leerzeichen));
    printf("isprint('\\t') = %d  (Druckbar inkl. Leerzeichen? Nein)\n\n",
           isprint(tab));

    /* --------------------------------------------------
     * ispunct(c)
     * Prueft, ob c ein Satz- oder Sonderzeichen ist.
     * Das sind druckbare Zeichen, die weder alphanumerisch
     * noch ein Leerzeichen sind (z.B. ! , . ; : ? @ # ...).
     * -------------------------------------------------- */
    printf("ispunct('%c') = %d  (Sonderzeichen/Interpunktion? Ja)\n",
           sonderzeichen, ispunct(sonderzeichen));
    printf("ispunct('%c') = %d  (Sonderzeichen/Interpunktion? Nein)\n\n",
           buchstabe_klein, ispunct(buchstabe_klein));

    /* --------------------------------------------------
     * isspace(c)
     * Prueft, ob c ein Whitespace-Zeichen ist.
     * Dazu gehoeren: Leerzeichen ' ', Tab '\t',
     * Zeilenumbruch '\n', '\r', '\f', '\v'.
     * -------------------------------------------------- */
    printf("isspace(' ')  = %d  (Whitespace? Ja)\n",
           isspace(leerzeichen));
    printf("isspace('%c') = %d  (Whitespace? Nein)\n\n",
           buchstabe_klein, isspace(buchstabe_klein));

    /* --------------------------------------------------
     * isupper(c)
     * Prueft, ob c ein Grossbuchstabe ist (A-Z).
     * Kleinbuchstaben, Ziffern usw. geben 0 zurueck.
     * -------------------------------------------------- */
    printf("isupper('%c') = %d  (Grossbuchstabe? Ja)\n",
           buchstabe_gross, isupper(buchstabe_gross));
    printf("isupper('%c') = %d  (Grossbuchstabe? Nein)\n\n",
           buchstabe_klein, isupper(buchstabe_klein));

    /* --------------------------------------------------
     * isxdigit(c)
     * Prueft, ob c eine hexadezimale Ziffer ist.
     * Gueltige Zeichen: 0-9, a-f, A-F.
     * -------------------------------------------------- */
    printf("isxdigit('%c') = %d  (Hex-Ziffer? Ja)\n",
           hex_buchstabe, isxdigit(hex_buchstabe));
    printf("isxdigit('%c') = %d  (Hex-Ziffer? Nein)\n\n",
           sonderzeichen, isxdigit(sonderzeichen));

    /* --------------------------------------------------
     * tolower(c)
     * Wandelt einen Grossbuchstaben in den entsprechenden
     * Kleinbuchstaben um. Ist c kein Grossbuchstabe,
     * wird c unveraendert zurueckgegeben.
     * -------------------------------------------------- */
    printf("tolower('%c') = '%c'  (G -> g)\n",
           buchstabe_gross, tolower(buchstabe_gross));
    printf("tolower('%c') = '%c'  (Ziffer bleibt unveraendert)\n\n",
           ziffer, tolower(ziffer));

    /* --------------------------------------------------
     * toupper(c)
     * Wandelt einen Kleinbuchstaben in den entsprechenden
     * Grossbuchstaben um. Ist c kein Kleinbuchstabe,
     * wird c unveraendert zurueckgegeben.
     * -------------------------------------------------- */
    printf("toupper('%c') = '%c'  (g -> G)\n",
           buchstabe_klein, toupper(buchstabe_klein));
    printf("toupper('%c') = '%c'  (Sonderzeichen bleibt unveraendert)\n\n",
           sonderzeichen, toupper(sonderzeichen));

    /* --------------------------------------------------
     * Praktisches Beispiel: Einen String analysieren
     * und dabei alle gelernten Funktionen anwenden.
     * -------------------------------------------------- */
    printf("=== Praktisches Beispiel: String-Analyse ===\n");
    char teststring[] = "Hallo Welt! 42\t";
    int i = 0;

    while (teststring[i] != '\0') {
        char c = teststring[i];
        printf("'%c' (ASCII %3d): ", (isprint(c) ? c : '?'), (unsigned char)c);

        if (isalpha(c))   printf("[isalpha] ");
        if (isdigit(c))   printf("[isdigit] ");
        if (isupper(c))   printf("[isupper] ");
        if (islower(c))   printf("[islower] ");
        if (isspace(c))   printf("[isspace] ");
        if (ispunct(c))   printf("[ispunct] ");
        if (iscntrl(c))   printf("[iscntrl] ");
        if (isxdigit(c))  printf("[isxdigit]");

        printf("\n");
        i++;
    }

    return 0;
}