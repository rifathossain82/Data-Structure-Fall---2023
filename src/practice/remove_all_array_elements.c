#include <stdio.h>

void printArray(int arr[], int length){
    printf("\nValues of array:\n");
    for(int i = 0; i < length; i++){
        printf("%d\t", arr[i]);
    }
}

void removeSingleElement(int arr[], int length, int index){
    for(int i = index; i < length; i++){
        arr[i] = arr[i + 1];
    }

    arr[length - 1] = 0;
}


void removeAllElement(int arr[], int length, int index){
    for(int i = index + 1; i < length; i++){
        arr[i] = 0;
    }
}

int main()
{
    int arr1[] = {10, 20, 30, 40, 50, 60, 70};

    /// array 1
    printArray(arr1, 7);
    removeAllElement(arr1, 7, 2);
    printArray(arr1, 7);

    return 0;
}