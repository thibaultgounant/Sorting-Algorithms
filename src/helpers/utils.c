
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(const int array[], size_t size) {
    for (int i = 0; i < size; ++i) {
        printf("%i ", array[i]);
    }
    printf("\n");
}
