#include <stdio.h>
#include "arrayLibrary.h"

int main(int argc, char **argv){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        printf("element %d: %d\n", i, arr[i]);
    }
    
}