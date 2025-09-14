#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (float)total / 5;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}