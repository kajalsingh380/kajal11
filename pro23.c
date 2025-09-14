#include <stdio.h>
int main() {
    int n, i, min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    min = max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("Minimum = %d\nMaximum = %d\n", min, max);
    return 0;
}
