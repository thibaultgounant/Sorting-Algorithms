#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(const int array[], size_t size) {
    for (int i = 0; i < size; ++i) {
        printf("%i ", array[i]);
    }
    printf("\n");
}

void shuffle(int array[], size_t size) {
    for (int i = 0; i < size; ++i) {
        swap(&array[i], &array[rand() % size]);
    }
}

void reverse(int array[], size_t size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(&array[i], &array[size-1-i]);
    }
}

void random(int array[], size_t size, int low, int high) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        array[i] = low + rand() % (1 + high - low);;
    }
}
