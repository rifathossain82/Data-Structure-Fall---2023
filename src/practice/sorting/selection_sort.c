#include <stdio.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int size){
    int minIndex;
    for(int i = 0; i < size - 1; i++){
        minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){
    int arr[] = {4,80,30,500,100};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
}