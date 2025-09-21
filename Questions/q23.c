// Which bitwise operator divides the number by two for each shift ( only for positive integers ) . Write a program to show this .
#include <stdio.h>
int main(){
    int n, result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    result = n >> 1; // Right shift operator divides the number by 2
    printf("Result after dividing %d by 2 using right shift operator: %d\n", n, result);
    return 0;
}