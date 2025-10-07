#include<stdio.h>

int fact(int f){

    //bacse case
    if(f==0){
        return 1;
    }
    //recursive case
    return f*fact(f-1);
}

int main(){
    int f=5;
    printf("%d",fact(f));
    return 0;
}