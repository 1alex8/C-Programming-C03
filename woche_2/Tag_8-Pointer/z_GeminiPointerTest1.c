#include <stdio.h>



void reverseArray(int *arr, int *arr2, int);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Vorher:  ");
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // --- DEIN FUNKTIONSAUFRUF HIER ---
    // Beispiel, wenn du Start- und Endzeiger nutzt:
    // reverseArray(arr, arr + length - 1); 
    reverseArray(arr, arr + length - 1, length);

    printf("Nachher: ");
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Erwarteter Output: 7 6 5 4 3 2 1

    return 0;
}

void reverseArray(int *arr, int *arr2, int length){
    int temp;

    for(int i = 0; i < length/2; i++){
        temp = *arr;
        *arr = *arr2;
        *arr2 = temp;
        arr++;
        arr2--;

    }

}