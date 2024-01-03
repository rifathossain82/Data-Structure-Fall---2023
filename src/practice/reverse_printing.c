#include <stdio.h>

void printReveres(int n){
    while(n > 0){
        int digit = n % 10;
        printf("%d", digit);
        n = n / 10;
    }
}

int main(){
    int n = 2581;
    printReveres(n);

    return 0;
}