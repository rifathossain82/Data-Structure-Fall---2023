#include <stdio.h>

void printArray(int arr[], int length){
    printf("\nValues of array:\n");
    for(int i = 0; i < length; i++){
        printf("%d\t", arr[i]);
    }
}

void shiftOnceRight(int arr[], int length){
    int temp = arr[length - 1];
    for(int i = length - 1; i >= 0; i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}

void shiftRight(int arr[], int length, int n){
    for(int i = 0; i < n; i++){
        shiftOnceRight(arr, length);
    }
}

int main()
{
    int arr1[] = {10, 20, 30, 40, 50, 60, 70};

    /// array 1
    printArray(arr1, 7);
    shiftRight(arr1, 7, 2);
    // shiftOnceRight(arr1, 7);
    printArray(arr1, 7);

    return 0;
}