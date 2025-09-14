#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        int bin, dec = 0, base = 1, rem;
        printf("Enter binary number: ");
        scanf("%d", &bin);
        while(bin > 0) {
            rem = bin % 10;
            dec += rem * base;
            bin /= 10;
            base *= 2;
        }
        printf("Decimal = %d\n", dec);
    } 
    else if(choice == 2) {
        int dec, bin[32], i = 0;
        printf("Enter decimal number: ");
        scanf("%d", &dec);
        while(dec > 0) {
            bin[i++] = dec % 2;
            dec /= 2;
        }
        printf("Binary = ");
        for(i = i - 1; i >= 0; i--)
            printf("%d", bin[i]);
        printf("\n");
    } 
    else {
        printf("Invalid choice\n");
    }
    return 0;
}