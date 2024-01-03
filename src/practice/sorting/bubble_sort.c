#include <stdio.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int team = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = team;
            }
        }
    }
}

int main(){
    int arr[] = {50,80,30,05,100};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
}