#include<stdio.h>
#include<conio.h>
int main()
{
    float principal,rate,time,si;
    printf("enter the principal amount:");
    scanf("%f",&principal);
    printf("enter the rate of interest:");
    scanf("%f",& rate);
    printf("enter time (in years):");
    scanf("%f",&time);
    si = (principal*rate*time)/100;
    printf("simple interest = %f",si);
    return 0;
}