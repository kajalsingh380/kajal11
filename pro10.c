#include <stdio.h>
int main() {
    int marks[5], i, sum=0;
    float per;
    printf("Enter marks of 5 subjects: ");
    for(i=0;i<5;i++){
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    per = sum/5.0;
    printf("Percentage = %.2f\n", per);
    if(per >= 90) printf("Grade A\n");
    else if(per >= 80) printf("Grade B\n");
    else if(per >= 70) printf("Grade C\n");
    else if(per >= 60) printf("Grade D\n");
    else printf("Grade F\n");
    return 0;
}