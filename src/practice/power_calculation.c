#include <stdio.h>

int powerCalculation(int x, int n){
    if(n == 0){
        return 1;
    }

    return x * powerCalculation(x, n - 1);
}

int main(){
    printf("value of (5 pow 2): %d", powerCalculation(5, 2));

    return 0;
}