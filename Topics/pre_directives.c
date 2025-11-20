#include<stdio.h>
#define MAX 10;
#define MIN(a,b) (a<b?a:b)
// #undef MAX
#define class(section) printf(#section)
#define tokenpaster(n) printf("x "#n" = %d",x##n)
#pragma startup func
#pragma exit func
void func(){
    printf("hello");
}
int main(){
    int xy=10;
    tokenpaster(y);
    int z=MAX;
    printf("\n%d\n",z);
    printf("minimum number is: %d\n",MIN(xy,z));
    class(124);
    return 0;
}