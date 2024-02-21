#include <stdio.h>
#include "arrayLibrary.h"

int main(int argc, char **argv) {    
    int len;
    printf("set array length: ");
    scanf("%d", &len);

    int arr[len];
    for (int i = 0; i < len; i++) {        
        printf("set value of %d. element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("arr: ");
    PrintArray(arr, len);

    printf("\nrvs: ");  
    ReverseArray(arr, len);
    PrintArray(arr, len);

    int max = GetMax(arr, len);
    printf("\nmax: %d", max);

    int min = GetMin(arr, len);
    printf("\nmin: %d", min);
}