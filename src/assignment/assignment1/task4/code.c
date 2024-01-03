#include<stdio.h>
#include<stdlib.h>

void rotateRight(int *source, int size, int k);
void printTheArray(int *source, int size);

int main(){
   int source[] = {10,20,30,40,50,60};
   int size = sizeof(source) / sizeof(source[0]);
   rotateRight(source, size, 2);
   printTheArray(source, size);
}

void rotateRight(int *source, int size, int k){
    int tempSource[size];
    for(int i = 0; i < size; i++){
        tempSource[i] = source[i];
    }

    for (int i = size - 1; i >= k; i--) {
        source[i] = source[i - k];
    }

    for(int i = 0; i < k; i++){
        source[i] = tempSource[size - k + i];
    }
}

void printTheArray(int *source, int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", source[i]);
    }
}