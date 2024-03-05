#include <stdio.h>
#include <time.h>

double benchmark(int array[], size_t size, void (*sorting_algorithm)(int[], size_t)) {
    clock_t start = clock();
    (sorting_algorithm)(array, size);
    clock_t end = clock();
    return (end-start) / (double)(CLOCKS_PER_SEC);
}
