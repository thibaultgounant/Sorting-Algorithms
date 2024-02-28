
void counting_sort(int array[], int size) {
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
    for (int i = 0; i < max - min + 1; ++i) {
        buffer[i] = 0;
    }

    for (int i = 0; i < size; ++i) {
        ++buffer[array[i] - min];
    }

    int index = 0;
    for (int i = 0; i < max - min + 1; ++i) {
        while (buffer[i] > 0) {
            array[index++] = i + min;
            buffer[i]--;
        }
    }
}
