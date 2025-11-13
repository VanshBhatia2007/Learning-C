//  Write a menu driven program to implement the following string operations: 
// (i) Calculate length of a string 
// (ii) Concatenate at the end of a given 
// (iii) Copy one string to another 
// (iv) Compare contents of two strings 
// (v) Copy nth character string to another 
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
void stringLength(char str[]) {
    printf("Length of the string: %lu\n", strlen(str));
}
void stringConcatenate(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}
void stringCopy(char source[], char destination[]) {
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}
void stringCompare(char str1[], char str2[]) {
    int result = strcmp(str1, str2);
    if(result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
}
void copyNCharacters(char source[], char destination[], int n) {
    strncpy(destination, source, n);
    destination[n] = '\0'; // Null-terminate the destination string
    printf("Copied first %d characters: %s\n", n, destination);
}
int main() {
    int choice, n;
    char str1[MAX_LENGTH], str2[MAX_LENGTH], destination[MAX_LENGTH];
    
    printf("Menu:\n");
    printf("1. Calculate length of a string\n");
    printf("2. Concatenate at the end of a given string\n");
    printf("3. Copy one string to another\n");
    printf("4. Compare contents of two strings\n");
    printf("5. Copy nth character string to another\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    getchar(); // Consume newline character left by scanf

    switch(choice) {
        case 1:
            printf("Enter a string: ");
            fgets(str1, MAX_LENGTH, stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
            stringLength(str1);
            break;
        case 2:
            printf("Enter first string: ");
            fgets(str1, MAX_LENGTH, stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
            printf("Enter second string to concatenate: ");
            fgets(str2, MAX_LENGTH, stdin);
            str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
            stringConcatenate(str1, str2);
            break;
        case 3:
            printf("Enter source string: ");
            fgets(str1, MAX_LENGTH, stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
            stringCopy(str1, destination);
            break;
        case 4:
            printf("Enter first string: ");
            fgets(str1, MAX_LENGTH, stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
            printf("Enter second string: ");
            fgets(str2, MAX_LENGTH, stdin);
            str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
            stringCompare(str1, str2);
            break;
        case 5:
            printf("Enter source string: ");
            fgets(str1, MAX_LENGTH, stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
            printf("Enter number of characters to copy: ");
            scanf("%d", &n);
            copyNCharacters(str1, destination, n);
            break;
        default:
            printf("Invalid choice.\n");
    }   
    return 0;
}