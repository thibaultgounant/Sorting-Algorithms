#ifndef SORTING_ALGORITHMS_TESTS_H
#define SORTING_ALGORITHMS_TESTS_H

bool is_sorted(const int array[], size_t size);
void print_result(bool result, const char message[]);
void sorts_tests(void (*sorting_algorithm)(int[], size_t), char name[]);

#endif
