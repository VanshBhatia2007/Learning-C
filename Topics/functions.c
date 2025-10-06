#include<stdio.h>

void add(int a){
    a++;
    printf("%d",a);
}

int main(){
    int a=10;
    add(a);
    return 0;
} 