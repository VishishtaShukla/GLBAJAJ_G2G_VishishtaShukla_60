# include<stdio.h>
int main()
{
int n,sumeven=0,sumodd=0;
printf("Enter number");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
    if(i%2==0)
    {
        sumeven=sumeven+i;
    }
    else{
        sumodd=sumodd+i;
    }
}
printf("sum of even number= %d" "\n" "sum of odd number= %d",sumeven,sumodd);
}