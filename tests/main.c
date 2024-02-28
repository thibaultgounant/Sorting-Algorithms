#include <stdio.h>
#include <stdlib.h>
#include "tests.h"

int main(int argc, char *argv[]) {
    bubble_sort_test();
    insertion_sort_test();
    selection_sort_test();
    merge_sort_test();
    quick_sort_test();
    counting_sort_test();
    return EXIT_SUCCESS;
}
