
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
