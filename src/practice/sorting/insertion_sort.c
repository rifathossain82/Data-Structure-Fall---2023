#include <stdio.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int size){
    int i, j, key;
    for(i = 1; i < size; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {400,80,30,500,100};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    insertionSort(arr, size);
    printArray(arr, size);
}