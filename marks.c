#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float p;
    printf("Enter marks of five subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    p=sum/5;
    printf("sum= %d \n percentage= %.2f",sum,p);
    return 0;

    


}