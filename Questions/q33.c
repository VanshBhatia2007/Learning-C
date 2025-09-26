// Write a program to take input from the user and 
// print it until the user enters 0.
#include <stdio.h>
int main() {
    int num;
    printf("Enter numbers (0 to stop): \n");
    do {
        scanf("%d", &num);
        if(num != 0) {
            printf("You entered: %d\n", num);
        }
    } while(num != 0);
    
    printf("Program terminated as you entered 0.\n");
    return 0;
}