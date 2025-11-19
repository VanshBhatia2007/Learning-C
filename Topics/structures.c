#include<stdio.h>
#include<string.h>
typedef struct students
{
    char name[10];
    int roll;
    int age;
} stu;

enum week {mon,tue,wed};

int main(){
    stu c1;
    stu *ptr;
    c1.age=10;
    strcpy(c1.name,"vansh");

    stu a[50];
    ptr=a;
    a[0].age=10;
    a[0].roll=100;
    strcpy(a[0].name,"vansh");
    printf("%d\n",a[0].roll);
    printf("%d\n",ptr->roll);
    //enumeration
    enum week today = mon;
    printf("day no. :%d",today);
    return 0;
}
