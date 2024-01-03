#include <stdio.h>

// Implement a recursive algorithm to find the m^n.
// m = 5. n= 4
// ans: 5*5*5*5

int power(int m, int n){
    if(n == 0){
        return 1;
    } else{
        return m * power(m, n - 1);
    }
}


int main(){
    int m = 5, n = 4;
    int result = power(m,n);
    printf("Result is: %d\n", result);

    return 0;
}