//  Write a program to display the following pattern of N rows, taking the value of 
// N from the user: 
// 1 
// 2   3
#include <stdio.h>

int main() {
    int n, number = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int r=1;r<=n;r++){
        number=r;
        for(int i=1;i<=r;i++){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }

    return 0;
}