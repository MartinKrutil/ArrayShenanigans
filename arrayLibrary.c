#include <stdio.h>
#include "arrayLibrary.h"

void Reverse(int *arrayPtr[]){    
    int length = sizeof(*arrayPtr) / sizeof(int);
    int temp = 0;
    printf("len: %d\n", length);
    for (int i = 0; i < length; i++)
    {
        temp = (int) *(arrayPtr + i);
        *(arrayPtr + i) = (int) *(arrayPtr + ((length - 1) - i));
        *(arrayPtr + ((length - 1) - i)) = (int) temp;           
    }
}