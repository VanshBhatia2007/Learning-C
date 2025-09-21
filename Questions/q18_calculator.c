#include <stdio.h>

int main(){
    char op;
    float no1,no2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&op);
    switch(op){
        case '+':
            printf("Enter two numbers: ");
            scanf("%f %f",&no1,&no2);
            printf("%.1f + %.1f = %.1f",no1,no2,no1+no2);
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%f %f",&no1,&no2);
            printf("%.1f - %.1f = %.1f",no1,no2,no1-no2);
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%f %f",&no1,&no2);
            printf("%.1f * %.1f = %.1f",no1,no2,no1*no2);
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%f %f",&no1,&no2);
            if(no2!=0)
                printf("%.1f / %.1f = %.1f",no1,no2,no1/no2);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! operator is not correct");
            break;    
        }
}