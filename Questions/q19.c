// Program to print whether a number is prime or not .
#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            printf("%d is not a prime number.",n);
            return 0;
        }
    }
    printf("%d is a prime number.",n);
    return 0;
}
