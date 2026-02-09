#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the values");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("first number after swappping = %d \n second number after swappping= %d" , a,b);
    return 0;

}