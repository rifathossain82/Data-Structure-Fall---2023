#include <stdio.h>

// Implement a recursive algorithm to find the nth Fibonacci number.


int fibonacci(int n){
    if(n <= 1){
        return 1;
    } else{
        return fibonacci(n - 1) + fibonacci(n -2);
    }
}

int main(){
    int n = 10;
    int result = fibonacci(n);
    printf("Fibonacci of %d is : %d\n", n, result);

    return 0;
}