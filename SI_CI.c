#include <stdio.h>
#include <math.h>
int main()
{
    float amt,si,ci,p,r,t;
    printf("Enter principal,rate of interest and time \n");
    scanf("%f%f%f",&p,&r,&t);
    si= (p*r*t)/100;
    amt=p*pow((1+(r/100)),t);
    ci=amt-p;
    printf("Simple Intere= %f" "\n" "Compound Interes= %f" ,si,ci);
    return 0;
}
