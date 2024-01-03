#include<stdio.h>
#include<stdlib.h>

void shiftRight(int *source, int size, int k);
void printTheArray(int *source, int size);

int main(){
   int source[] = {10,20,30,40,50,60};
   int size = sizeof(source) / sizeof(source[0]);
   shiftRight(source, size, 3);
   printTheArray(source, size);
}

void shiftRight(int *source, int size, int k){
    for (int i = size - 1; i >= k; i--) {
        source[i] = source[i - k];
    }

    for(int i = 0; i < k; i++){
        source[i] = 0;
    }
}

void printTheArray(int *source, int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", source[i]);
    }
}