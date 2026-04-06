#include <stdio.h>

struct daten{
    int uno;
    float duo;
    float tres;
};

struct daten info;
struct daten *ptrS;

int main(int argc, char argv[]){

    info.uno = 100;

    ptrS = &info;

    ptrS->duo = 5.5;
    (*ptrS).tres = 5.5;

    return 0;
}