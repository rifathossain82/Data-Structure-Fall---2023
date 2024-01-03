#include <stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    }

    return n + sum(n - 1);
}

int main(){
    printf("Sum of natural 10: %d", sum(10));

    return 0;
}