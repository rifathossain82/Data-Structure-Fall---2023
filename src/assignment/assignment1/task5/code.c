#include<stdio.h>

void removeValue(int *source, int size, int k);
void printTheArray(int *source, int size);

int main(){
   int source[] = {10,20,30,40,50,60};
   int size = sizeof(source) / sizeof(source[0]);
   removeValue(source, size, 2);
   printTheArray(source, size);
}

void removeValue(int *source, int size, int k){
    for (int i = k; i < size; i++) {
        source[i] = source[i + 1];
    }

    source[size - 1] = 0;
}

void printTheArray(int *source, int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", source[i]);
    }
}