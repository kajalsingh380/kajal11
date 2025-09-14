#include <stdio.h>
#include <conio.h>

int main()
{
    float fahrenheit, celsius;
    printf("enter temperature in fahrenheit:");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("celsius = %.3f", celsius);
    return 0;
}