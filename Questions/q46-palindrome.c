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