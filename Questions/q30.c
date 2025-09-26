// Write a program to check if a number is a 
// palindrome using while loop.
#include <stdio.h>
int main() {
    int num, original, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    original = num; // Store the original number
    
    while(num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    if(original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    
    return 0;
}