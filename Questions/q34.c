// Write a program to calculate the sum of first N 
// natural numbers using do-while.
#include <stdio.h>
int main() {
    int N, sum = 0, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    
    do {
        sum += i;
        i++;
    } while(i <= N);
    
    printf("Sum of first %d natural numbers is: %d\n", N, sum);
    return 0;
}