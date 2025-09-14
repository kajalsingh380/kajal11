#include<stdio.h>
#include<conio.h>
int main()
{
    float radius,area,circumference;
    const float pi = 3.14;
    printf("enter the value of radius:");
    scanf("%f",&radius);
    area = pi*radius*radius;
    circumference = 2*pi*radius;
    printf("area = %.2f\n",area);
    printf("circumference = %.2f\n",circumference);
    return 0;
}