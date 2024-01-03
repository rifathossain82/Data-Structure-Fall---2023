#include <stdio.h>

int binarySearch(int arr[], int size, int key){
    int low = 0, high = size - 1, mid = low + (high - low) / 2;
    while(low <= high){
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {5,8,6,20,40,70,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    int result = binarySearch(arr, size, key);
    if(result != -1){
        printf("%d at %d position.", key, result);
    } else{
        printf("%d is missing in the array.", key);
    }

    return 0;
}