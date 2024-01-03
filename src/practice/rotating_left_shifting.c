#include <stdio.h>

void printArray(int arr[], int length){
    printf("\nValues of array:\n");
    for(int i = 0; i < length; i++){
        printf("%d\t", arr[i]);
    }
}

void shiftOnceLeft(int arr[], int length){
    int temp = arr[0];
    for(int i = 0; i < length; i++){
        arr[i] = arr[i + 1];
    }

    arr[length - 1] = temp;
}

void shiftLeft(int arr[], int length, int n){
    for(int i = 0; i < n; i++){
        shiftOnceLeft(arr, length);
    }
}

int main()
{
    int arr1[] = {10, 20, 30, 40, 50, 60, 70};

    /// array 1
    printArray(arr1, 7);
    // shiftOnceLeft(arr1, 7);
    shiftLeft(arr1, 7, 2);
    printArray(arr1, 7);

    return 0;
}