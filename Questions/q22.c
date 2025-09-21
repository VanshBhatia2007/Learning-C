// Write a program to print whether a number is a armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int no, cnt = 0, d = 0;
    double p = 0;     // Use double for pow() result
    int no1, no2;

    scanf("%d", &no);
    no1 = no;
    no2 = no;

    // Count the number of digits
    while (no > 0) {
        cnt++;
        no /= 10;
    }

    // Calculate the sum of digits raised to 'cnt'
    while (no1 > 0) {
        d = no1 % 10;
        no1 /= 10;
        p += pow(d, cnt);
    }

    // Check Armstrong condition
    if (no2 == (int)p)
        printf("true\n");
    else
        printf("false\n");
    return 0;
}
