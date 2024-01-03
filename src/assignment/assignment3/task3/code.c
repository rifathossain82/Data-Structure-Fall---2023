#include <stdio.h>

// Print all the elements of a given array recursively.

void printArray(int arr[], int size, int index) {
    if (index >= size) {
        return;
    }
    printf("%d ", arr[index]);
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Elements of the array: ");
    printArray(arr, size, 0);
    
    return 0;
}
