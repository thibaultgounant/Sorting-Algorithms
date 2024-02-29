#include <stdio.h>

void counting_sort(int array[], size_t size) {
    int min = array[0];
    int max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    int buffer[max - min + 1];
    for (int i = min; i <= max; ++i) {
        buffer[i - min] = 0;
    }

    for (int i = 0; i < size; ++i) {
        ++buffer[array[i] - min];
    }

    int index = 0;
    for (int i = min; i <= max; ++i) {
        for (int j = 0; j < buffer[i - min]; ++j) {
            array[index++] = i;
        }
    }
}
