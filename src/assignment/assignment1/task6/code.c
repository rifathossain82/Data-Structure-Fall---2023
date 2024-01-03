#include<stdio.h>

void removeAllValue(int *source, int size, int k);
void printTheArray(int *source, int size);

int main(){
   int source[] = {10,2,30,2,50,2,2,0,0};
   int size = sizeof(source) / sizeof(source[0]);
   removeAllValue(source, size, 2);
   printTheArray(source, size);
}

void removeAllValue(int *source, int size, int k){
    int newSize = 0;
    
    for (int i = 0; i < size; ++i) {
        if (source[i] != k) {
            source[newSize] = source[i];
            newSize++;
        }
    }


    for (int i = newSize; i < size; ++i) {
        source[i] = 0;
    }
}

void printTheArray(int *source, int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", source[i]);
    }
}