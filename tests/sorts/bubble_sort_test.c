#include <stdio.h>
#include "sorts.h"
#include "utils.h"

void empty_array_is_sorted() {
    static int array[] = {};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array, size);
    print_result(is_sorted(array, size), "- empty array is sorted\n");
}

void one_element_array_is_sorted() {
    static int array[] = {0};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array, size);
    print_result(is_sorted(array, size), "- one element array is sorted\n");
}

void sorted_array_is_sorted() {
    static int array[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array, size);
    print_result(is_sorted(array, size), "- sorted array is sorted\n");
}

void reverse_sorted_array_is_sorted() {
    static int array[] = {9,8,7,6,5,4,3,2,1,0};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array, size);
    print_result(is_sorted(array, size), "- reverse sorted array is sorted\n");
}

void negative_element_array_is_sorted() {
    static int array[] = {0,1,-2,3,4,-5,6,7,-8,9};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array, size);
    print_result(is_sorted(array, size), "- negative element array is sorted\n");
}

void duplicate_element_array_is_sorted() {
    static int array[] = {0,1,7,3,4,4,6,7,2,9};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array, size);
    print_result(is_sorted(array, size), "- duplicate element array is sorted\n");
}

void randomized_array_is_sorted() {
    static int array[] = {5,1,4,9,2,0,6,7,8,3};
    int size = sizeof(array) / sizeof(array[0]);
    bubble_sort(array, size);
    print_result(is_sorted(array, size), "- randomized array is sorted\n");
}

void bubble_sort_test() {
    printf("\nBubble sort tests:\n");
    empty_array_is_sorted();
    one_element_array_is_sorted();
    sorted_array_is_sorted();
    reverse_sorted_array_is_sorted();
    negative_element_array_is_sorted();
    duplicate_element_array_is_sorted();
    randomized_array_is_sorted();
}
