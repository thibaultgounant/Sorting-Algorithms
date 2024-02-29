#include <stdio.h>
#include "utils.h"

void selection_sort(int array[], size_t size) {
    for (int i = 0; i < size; ++i) {
        int index = i;
        for (int j = i + 1; j < size; ++j) {
            if (array[index] > array[j]) {
                index = j;
            }
        }
        swap(&array[i], &array[index]);
    }
}
