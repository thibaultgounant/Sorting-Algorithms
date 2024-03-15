#include <stdio.h>

bool is_sorted(const int array[], size_t size) {
    bool sorted = true;
    for (int i = 1; i < size && sorted; ++i) {
        sorted = array[i-1] <= array[i];
    }
    return sorted;
}

void print_result(bool result, const char message[]) {
    result ?
    fprintf(stdout, "\033[0;32m PASS \033[0m \t %s", message) :
    fprintf(stderr, "\033[1;31m FAIL \033[0m \t %s", message);
}
