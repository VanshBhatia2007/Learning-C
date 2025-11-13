//  Write a program to check if a string is palindrome or not.
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while(left < right) {
        if(str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}
int main() {
    char str[MAX_LENGTH];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    if(isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }
    return 0;
}