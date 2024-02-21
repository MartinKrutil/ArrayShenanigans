#include <stdio.h>
#include <time.h>
#include "arrayLibrary.h"

int main(int argc, char **argv) {
    printf("set array length: ");
    int len = 0;

    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++) {        
        printf("set value of %d. element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\narr: ");
    PrintArray(arr, len);

    printf("\nrev: ");  
    ReverseArray(arr, len);
    PrintArray(arr, len);

    int max = GetMax(arr, len);
    printf("\nmax: %d", max);

    int min = GetMin(arr, len);
    printf("\nmin: %d", min);
}