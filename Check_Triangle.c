#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter Three sides a,b&c: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("It can form a valid triangle \n");
    printf("Type of triangle: ");
    if(a==b==c)
    {
        printf("Ëquilateral triangle");
    }
    else if(pow(a,2)+pow(b,2)==pow(c,2)||pow(b,2)+pow(c,2)==pow(a,2) || pow(c,2)+pow(a,2)==pow(b,2))
      {
       printf("Right Angled triangle");
    }
    else if((a==b || b==c || a==c )&&( a != b || b != c || c != a))
    {
        printf("Isoceles Triangle");
    }
    else {
    
    printf("Scalene triangle");
    }
    
}
else
{
    printf("It can not form a valid triangle");
}

    return 0;
}
    