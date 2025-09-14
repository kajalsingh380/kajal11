#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size of arrays: ");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    printf("Enter elements of first array: ");
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter elements of second array: ");
    for(i = 0; i < n; i++) scanf("%d", &b[i]);
    for(i = 0; i < n; i++) c[i] = a[i] + b[i];
    printf("Resultant array: ");
    for(i = 0; i < n; i++) printf("%d ", c[i]);
    return 0;
}