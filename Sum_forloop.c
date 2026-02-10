#include <stdio.h>
int main()
{
    int n,s=0;
    printf("Enter number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        s=s+i;
    }
    printf("sum= %d",s);
    return 0;
}