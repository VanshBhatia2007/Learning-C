#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr=fopen("file1.txt","w");
    char str[100];
    // while(fscanf(fptr, "%c", &str) != EOF){
    //     printf("%c",str);
    // }
    fputs("hello world",fptr);
    // printf("%s",fgets(str,100,fptr));
    fclose(fptr);
    return 0;
}