
static void merge(int array[], int start, int middle, int end) {
    int buffer[end - start + 1];
    for (int i = start; i <= end; ++i) {
        buffer[i - start] = array[i];
    }

    int i = 0;
    int j = middle + 1 - start;
    int k = start;
    while (k <= end) {
        if (j > end || (i <= middle-start && buffer[i] < buffer[j])) {
            array[k++] = buffer[i++];
        } else {
            array[k++] = buffer[j++];
        }
    }
}

static void merge_sort_helper(int array[], int start, int end) {
    if (start < end) {
        int middle = start + (end-start) / 2;
        merge_sort_helper(array, start, middle);
        merge_sort_helper(array, middle + 1, end);
        merge(array, start, middle, end);
    }
}

void merge_sort(int array[], int size) {
    merge_sort_helper(array, 0, size-1);
}
