#include <stdio.h>
#include <stdlib.h>
#include "tests.h"
#include "sorts.h"

int main(int argc, char *argv[]) {
    sorts_tests(&bubble_sort, "Bubble sort");
    sorts_tests(&insertion_sort, "Insertion sort");
    sorts_tests(&selection_sort, "Selection sort");
    sorts_tests(&merge_sort, "Merge sort");
    sorts_tests(&quick_sort, "Quick sort");
    sorts_tests(&counting_sort, "Counting sort");
    return EXIT_SUCCESS;
}
