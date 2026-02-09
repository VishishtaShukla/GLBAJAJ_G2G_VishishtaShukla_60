#include <stdio.h>
int main()
{
    int a,b,result;
    char operator;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Enter operator");
    scanf(" %c",&operator);
    switch(operator)
    {
        case '+':
        result=a+b;
        printf("Additon of numbers entered is %d",result);
        break;
        case '-':
        result=a-b;
        printf("Subtraction of numbers entered is %d",result);
        break;
        case '*':
        result=a*b;
        printf("Multiplication of numbers entered is %d",result);
        break;
        case '/':
        result=a/b;
        printf("Quotient of numbers entered is %d",result);
        break;
        default:
        printf("Wrong choice");
    }
    return 0;
    
}