#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float p;
    printf("Enter marks of five subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    p=sum/5;
    if(p>=90 && p<=100)
    {
        printf("Grade A");
    }
    else if(p>=80 && p<90)
    {
        printf("Grade B");
    }
    else if(p>=60 && p<80)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade D");
    }
    return 0;
}
