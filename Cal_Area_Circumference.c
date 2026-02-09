#include <stdio.h>
int main()
{
    float c,Area, r,pi=3.14;
    printf("Ënter radius");
    scanf("%f",&r);
    c=2*pi*r;
    Area=pi*r*r;
    printf("Area is %f" "\n" "Circumference is %f" , Area,c);
    return 0;   
}