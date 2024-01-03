#include<stdio.h>
#include<stdlib.h>

void rotateLeft(int *source, int size, int k);
void printTheArray(int *source, int size);

int main(){
   int source[] = {10,20,30,40,50,60};
   int size = sizeof(source) / sizeof(source[0]);
   rotateLeft(source, size, 3);
   printTheArray(source, size);
}

void rotateLeft(int *source, int size, int k){
    int tempSource[size];
    for(int i = 0; i < size; i++){
        tempSource[i] = source[i];
    }

    for(int i = 0; i < size - k; i++){
        source[i] = source[i + k];
    }

    for (int i = 0; i < k; i++) {
        source[size - k + i] = tempSource[i];
    }
}

void printTheArray(int *source, int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", source[i]);
    }
}