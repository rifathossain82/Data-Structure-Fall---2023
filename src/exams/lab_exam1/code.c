#include <stdio.h>

void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void printArrayRecursively(int arr[], int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }

    printf("%d ", arr[size - 1]);
    printArrayRecursively(arr, size - 1);
}

int main() {
    int arr[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // To sort the array.
    insertionSort(arr, size);

    // To print the array.
    printArrayRecursively(arr, size);

    return 0;
}
