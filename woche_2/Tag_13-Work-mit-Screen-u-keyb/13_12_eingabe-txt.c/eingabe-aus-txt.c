
//starten in powershell: Get-Content eigabe.txt | ./eingabe-aus-txt
// Linux: ./eingabe-aus-txt < eingabe.txt

#include<stdio.h>
#include<ctype.h>// wird für isalpha(benötigt) und tolower()benötigt


#define alphabet 26
#define vorkommen 1

int main(int argc, char *argv[]){
    int haeufigkeit[alphabet] = {0};
    int gesamt = 0;
    int c;

    /* Eingabe zeichenweise einlesen (via Umleitung: ./prog < datei.txt) */
    while((c = getchar()) != EOF){
        if(isalpha(c)){
            haeufigkeit[tolower(c) - 'a']++;
            gesamt++;
        }
    }
    /* Statistik ausgeben */
    printf("========================================\n");
    printf("       Buchstaben-Haeufigkeitsanalyse   \n");
    printf("========================================\n");
    printf("%-8s %8s %10s  %s\n", "Buchst.", "Anzahl", "Anteil", "Balken");
    printf("----------------------------------------\n");

    for(int i = 0; i < alphabet; i++){
        if(haeufigkeit[i] == 0) continue;

        double anteil = gesamt > 0 ? ((100*haeufigkeit[i])/gesamt) : 0.0;
        int balkenlen = gesamt > 0 ? (int)((anteil/100)*100) : 0;

        printf("\n%c/%c :%8d %9.2f | ", 'A' + i, 'a' + i, haeufigkeit[i], anteil);
        for(int j = 0; j < balkenlen; j++) putchar('=');
        putchar('\n');
    }
    printf("----------------------------------------\n");
    printf("Gesamt: %d Buchstaben\n", gesamt);

    return 0;
}
/*
Ausgabe:
========================================
       Buchstaben-Haeufigkeitsanalyse
========================================
Buchst.    Anzahl     Anteil  Balken
----------------------------------------

A/a :      26      9.00 | =========

B/b :       7      2.00 | ==

C/c :       5      1.00 | =

D/d :      11      4.00 | ====

E/e :      43     15.00 | ===============

G/g :       9      3.00 | ===

H/h :       2      0.00 |

I/i :      24      8.00 | ========

J/j :       1      0.00 |

K/k :       3      1.00 | =

L/l :      12      4.00 | ====

M/m :      18      6.00 | ======

N/n :      19      7.00 | =======

O/o :       6      2.00 | ==

P/p :       4      1.00 | =

R/r :      20      7.00 | =======

S/s :      12      4.00 | ====

T/t :      28     10.00 | ==========

U/u :       9      3.00 | ===

V/v :       1      0.00 |

W/w :       5      1.00 | =

X/x :       5      1.00 | =

Z/z :       1      0.00 |
----------------------------------------
Gesamt: 271 Buchstaben
*/