#include <stdio.h>

int isPalidrome(int n){
    int temp = n, reveresedNumber;
    while(n > 0){
        int digit = n % 10;
        reveresedNumber = (reveresedNumber * 10) + digit;
        n = n / 10;
    }

    if(temp == reveresedNumber){
        return 1;
    } else{
        return 0;
    }
}


/// Checked by recursion.
int isPalidrome2(int num, int originamNum, int reversedNum){
    if(num == 0){
        return originamNum == reversedNum;
    }

    int digit = num % 10;
    reversedNum = (reversedNum * 10) + digit;
    num = num / 10;
    return isPalidrome2(num, originamNum, reversedNum);
}

int main(){
    int n = 145;
    int result = isPalidrome2(n, n, 0);
    
    if(result == 1){
        printf("Number is palindrome!");
    } else{
        printf("Number is not palindrome!");
    }

    return 0;

}