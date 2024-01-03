#include <stdio.h>

// Implement a recursive algorithm to find factorial of n.

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else{
        return n * factorial(n - 1);
    }
}


int main(){
    int n = 4;
    int fact = factorial(n);
    printf("Fact of %d is: %d\n", n, fact);

    return 0;
}