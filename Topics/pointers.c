#include <stdio.h>

int main(){
    int a=10;
    int b[]={10,20,30};
    int* ptr3=&b[0];
    int* ptr;
    int** ptr2=&ptr;
    ptr=&a;
    printf("%d\n",&ptr);
    printf("%u\n",&a);
    printf("%d\n",*ptr);
    printf("%d\n",*(&ptr));
    printf("%d\n",&ptr2);
    printf("%d\n",*ptr3);
    return 0;
}