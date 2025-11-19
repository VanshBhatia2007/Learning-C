#include<stdio.h>
#include<string.h>

int main(){
    char str1[10];
    char str2[10];
    gets(str1);
    puts(str1);
    printf("length of the string is: %d\n",strlen(str1));
    strcpy(str2,str1);
    printf("str2 : %s\n",str2);
    strcat(str1,str2);
    printf("str1 after concat : %s\n",str1);
    if(strcmp(str1,str2)==0){
        printf("equal");
    }
    else printf("not equal\n");
    printf("reverse of str1 : %s\n",strrev(str1));
    printf("lowercase of str2 : %s\n",strlwr(str2));
    printf("upercase of str2 : %s\n",strupr(str2));
    return 0;
}
