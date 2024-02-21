#include "utils.h"

void bubble_sort(int array[], int size) {
    bool sorted;
    for (int i = 0; i < size && !sorted; ++i) {
        sorted = true;
        for (int j = 0; j < size - 1 - i; ++j) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                sorted = false;
            }
        }
    }
}
