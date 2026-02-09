#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter numbers");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("Number are equal");
    }
    else{
        printf("Numbers are not equal");
    }
    return 0;
}