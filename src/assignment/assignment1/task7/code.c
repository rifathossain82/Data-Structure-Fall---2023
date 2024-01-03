#include<stdio.h>

void checkRepetition(int *source, int size);

int main(){
   int source[] = {10,2,30,2,50,2,2,0,0};
   int size = sizeof(source) / sizeof(source[0]);
   checkRepetition(source, size);
}

void checkRepetition(int *source, int size){
    int repetedNumber[size];
    
    for (int i = 0; i < size; i++) {
        printf("%d\t", source[i]);
    }
}