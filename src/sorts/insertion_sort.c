#include "utils.h"

void insertion_sort(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        int j = i;
        while (j > 0 && array[j-1] > array[j]) {
            swap(&array[j-1], &array[j]);
            --j;
        }
    }
}
