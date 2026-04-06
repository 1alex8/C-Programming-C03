#include <stdio.h>

/* =========================================================================
 * 1. FUNKTIONSPROTOTYPEN (DEKLARATIONEN)
 * Hier machen wir dem Compiler die Funktionen bekannt, bevor sie 
 * aufgerufen werden.
 * ========================================================================= */

// Methode 1: Array ohne Größenangabe (Der Standardweg)
void printArrayUnsized(int arr[], int size);

// Methode 2: Als normaler Zeiger (Technisch exakt das Gleiche wie Methode 1)
void printArrayPointer(int *arr, int size);

// Methode 3: Array mit Größenangabe (Größe dient meist nur als Dokumentation)
void printArraySized(int arr[5], int size);

// Methode 4: Zeiger auf ein ganzes Array (Strenge Typisierung, Größe ist fix)
void printPointerToArray(int (*arr)[5]);

// Methode 5: C99 VLA (Variable Length Array) Syntax (Größe steht in den Klammern)
void printArrayVLA(int size, int arr[]);


/* =========================================================================
 * 2. HAUPTPROGRAMM (Aufruf der Funktionen)
 * ========================================================================= */
int main() {
    // Wir definieren ein Array mit exakt 5 Elementen
    int meinArray[5] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("--- Starte Array-Uebergabe Demos ---\n\n");

    // Aufruf Methode 1
    printf("Methode 1 (Unsized Array):\n");
    printArrayUnsized(meinArray, size);

    // Aufruf Methode 2
    printf("Methode 2 (Pointer):\n");
    printArrayPointer(meinArray, size);

    // Aufruf Methode 3
    printf("Methode 3 (Sized Array):\n");
    printArraySized(meinArray, size);

    // Aufruf Methode 4
    // Achtung: Hier uebergeben wir die ADRESSE des gesamten Arrays (&meinArray),
    // nicht nur den Zeiger auf das erste Element.
    printf("Methode 4 (Pointer to Array):\n");
    printPointerToArray(&meinArray);

    // Aufruf Methode 5
    printf("Methode 5 (C99 VLA Syntax):\n");
    printArrayVLA(size, meinArray);

    return 0;
}


/* =========================================================================
 * 3. FUNKTIONSDEFINITIONEN
 * Hier wird der tatsächliche Code der Funktionen geschrieben.
 * ========================================================================= */

// Methode 1: Sehr ueblich. Zeigt sofort, dass ein Array erwartet wird.
void printArrayUnsized(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

// Methode 2: Ebenfalls sehr ueblich. Macht deutlich, dass arr ein Pointer ist.
// arr[i] und *(arr + i) bewirken hier exakt das Gleiche.
void printArrayPointer(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Alternative Schreibweise zu arr[i]
    }
    printf("\n\n");
}

// Methode 3: Die 5 in den Klammern wird vom Compiler meist ignoriert.
// Es schuetzt nicht davor, ein Array mit nur 3 Elementen zu uebergeben.
// Es ist eher ein Hinweis fuer den Programmierer.
void printArraySized(int arr[5], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

// Methode 4: Sehr strikt. Nimmt nur exakt Arrays der Groesse 5 an.
// Wenn man ein Array der Groesse 6 uebergibt, meckert der Compiler.
// Syntax beim Zugriff: (*arr)[i] entdereferenziert zuerst den Array-Pointer.
void printPointerToArray(int (*arr)[5]) {
    for(int i = 0; i < 5; i++) {
        printf("%d ", (*arr)[i]); 
    }
    printf("\n\n");
}

// Methode 5: Modernes C (ab C99). Die Array-Groesse wird im Parameter 
// arr angegeben. Der Parameter 'size' muss davor deklariert sein!
void printArrayVLA(int size, int arr[]) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}