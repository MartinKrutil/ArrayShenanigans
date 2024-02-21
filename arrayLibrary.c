#include <stdio.h>
#include "arrayLibrary.h"

void PrintArray(int arr[], int len) {
    printf("[%d", arr[0]);
    for (int i = 1; i < len - 1; i++)
        printf(", %d", arr[i]);

    printf(", %d]", arr[len - 1]);
}

void ReverseArray(int arr[], int len) {    
    int temp;
    for (int i = 0; i < len / 2; i++) {
        temp = arr[i];
        arr[i] = arr[len - (i + 1)];
        arr[len - (i + 1)] = temp;
    }
}

int GetMax(int arr[], int len) {
    int max = arr[0];
    for (int i = 1; i < len; i++)
        if(arr[i] > max)
            max = arr[i];
    
    return max;
}

int GetMin(int arr[], int len) {
    int min = arr[0];
    for (int i = 1; i < len; i++)
        if(arr[i] < min) min = arr[i];

    return min;
}