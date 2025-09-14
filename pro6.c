#include<stdio.h>
#include<conio.h>
int main ()
{
    int num1,num2;
    printf("enter first number;");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",num2);
    if (num1==num2)
    {
        printf("both numbers are equal");
    }
    else{
        printf("the numbers are equal");
    }return 0;

}