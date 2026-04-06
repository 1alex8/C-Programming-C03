#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

// Globale Variablen
bool gameOver;
const int width = 20;
const int height = 10;
int x, y, score;
int ghostX, ghostY;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

// Das Spielfeld (# = Wand, . = Punkt, P = Pacman, G = Geist)
string map[height] = {
    "####################",
    "#........#.........#",
    "#.######.#.#######.#",
    "#.#......#.......#.#",
    "#.#.####.###.###.#.#",
    "#.#.#........#.#.#.#",
    "#.###.######.###.#.#",
    "#..................#",
    "#..................#",
    "####################"
};

void Setup() {
    gameOver = false;
    dir = STOP;
    score = 0;
    
    // Startpositionen
    x = 1; 
    y = 1; 
    ghostX = 18; 
    ghostY = 8;
}

void Draw() {
    // Bildschirm löschen (Windows-spezifisch)
    system("cls"); 
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == y && j == x)
                cout << "P"; // Zeichne Pacman
            else if (i == ghostY && j == ghostX)
                cout << "G"; // Zeichne den Geist
            else
                cout << map[i][j]; // Zeichne Wand, Punkt oder leeren Raum
        }
        cout << endl;
    }
    
    cout << "\nPunkte: " << score << endl;
    cout << "Steuerung: W (Hoch), A (Links), S (Runter), D (Rechts)" << endl;
    cout << "Beenden: X" << endl;
}

void Input() {
    // Prüfen, ob eine Taste gedrückt wurde
    if (_kbhit()) {
        switch (_getch()) {
        case 'a': dir = LEFT; break;
        case 'd': dir = RIGHT; break;
        case 'w': dir = UP; break;
        case 's': dir = DOWN; break;
        case 'x': gameOver = true; break;
        }
    }
}

void Logic() {
    int nextX = x;
    int nextY = y;

    // Nächste Position basierend auf der Richtung berechnen
    switch (dir) {
    case LEFT: nextX--; break;
    case RIGHT: nextX++; break;
    case UP: nextY--; break;
    case DOWN: nextY++; break;
    default: break;
    }

    // Kollisionsabfrage mit Wänden
    if (map[nextY][nextX] != '#') {
        x = nextX;
        y = nextY;
        
        // Punkte sammeln
        if (map[y][x] == '.') {
            score += 10;
            map[y][x] = ' '; // Punkt entfernen
        }
    } else {
        dir = STOP; // An der Wand anhalten
    }

    // Kollision mit dem Geist
    if (x == ghostX && y == ghostY) {
        gameOver = true;
    }
}

int main() {
    Setup();
    
    // Die Game-Loop
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(150); // Spielgeschwindigkeit (150 Millisekunden warten)
    }
    
    system("cls");
    cout << "GAME OVER!" << endl;
    cout << "Deine Endpunktzahl: " << score << endl;
    
    return 0;
}