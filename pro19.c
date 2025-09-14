#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, digit, sum, n;
    for(num = 1; num <= 1000; num++) {
        temp = num;
        sum = 0;
        n = (int)log10(num) + 1;
        while(temp > 0) {
            digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }
        if(sum == num) {
            printf("%d ", num);
        }
    }
    return 0;
}