
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool is_sorted(const int array[], int size) {
    bool sorted = true;
    for (int i = 0; i < size - 1 && sorted; ++i) {
        sorted = array[i] <= array[i+1];
    }
    return sorted;
}

void print_result(bool result, char message[]) {
    result ?
    fprintf(stdout, "\033[0;32m PASS \033[0m \t %s", message) :
    fprintf(stderr, "\033[1;31m FAIL \033[0m \t %s", message);
}
