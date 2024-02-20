#include <stdio.h>
#include <time.h>
#include "arrayLibrary.h"

void ClearConsole() {
    printf("\e[1;1H\e[2J");
}

int main(int argc, char **argv) {
    ClearConsole();

    printf("set array length: ");
    int len = 0;

    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++) {        
        ClearConsole();

        printf("set value of %d. element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    ClearConsole();

    printf("arr: ");
    PrintArray(arr, len);

    printf("rev: ");  
    ReverseArray(arr, len);
    PrintArray(arr, len);

    int max = GetMax(arr, len);
    printf("max: %d\n", max);

    int min = GetMin(arr, len);
    printf("min: %d\n", min);
}