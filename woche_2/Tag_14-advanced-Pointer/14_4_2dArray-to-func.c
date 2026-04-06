//demonstriert die übergabe eines Zeigers auf ein mehrdimensionales Array

#include<stdio.h>

void printarr_1(int (*)[4]);
void printarr_2(int (*)[4], int);
void printarr_3(int (*)[4], int , int);

int main(void){
    int multi[3][4]= {{1,2,3,4}, {5, 6, 7, 8}, {9, 10 ,11, 12}};
    int (*zgr)[4];

    zgr = multi;

    for(int i = 0; i < 3;i++){
        printarr_1(zgr++);
    }

    puts("\nEnter drücken: ");
    getchar();
    printarr_2(multi, 3);
    printf("\n");
    puts("\nEnter drücken: ");
    getchar();
    printarr_3(multi, 3, 4);
    printf("\n");
    return 0;
}

void printarr_1(int (*arr)[4]){
    int *p;
    p = (int *) arr;
    for(int i = 0; i < 4; i++){
        printf("\n%d", *p++);
    }
}

void printarr_2(int (*arr)[4], int n){
    int *p = (int *)arr;
    for(int i = 0; i < (n*4); i++){
        printf("\n%d", *p++);
    }
}

void printarr_3(int (*arr)[4], int zeile, int spalte){
    for(int i = 0; i < zeile; i++){
        for(int j= 0; j < spalte; j++){
            printf("\n%d", *(*(arr + i) + j));
        }
    }
}


/*
Ausgabe: 
1
2
3
4
5
6
7
8
9
10
11
12Enter drücken: 


1
2
3
4
5
6
7
8
9
10
11
12
Enter drücken:


1
2
3
4
5
6
7
8
9
10
11
12
PS D:\Coding\Tutorial\C_Linux_21_Buch> 
*/