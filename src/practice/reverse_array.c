#include <stdio.h>

void printArray(int arr[], int length){
    printf("\nValues of array:\n");
    for(int i = 0; i < length; i++){
        printf("%d\t", arr[i]);
    }
}

void reverseArray(int arr[], int length){
    int temp = 0;
    for(int i = 0; i < (length / 2); i++){
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}

int main()
{
    int arr1[] = {10, 20, 30, 40, 50, 60, 70};
    int arr2[] = {4,3,2,1};

    /// array 1
    printArray(arr1, 7);
    reverseArray(arr1, 7);
    printArray(arr1, 7);

    
    /// array 2
    printArray(arr2, 4);
    reverseArray(arr2, 4);
    printArray(arr2, 4);

    return 0;
}