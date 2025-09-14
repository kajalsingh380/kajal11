#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("Enter a string: ");
    gets(str1);
    
    // Length
    printf("Length = %lu\n", strlen(str1));
    
    // Copy
    strcpy(str2, str1);
    printf("Copied string = %s\n", str2);
    
    // Compare
    printf("Enter another string: ");
    gets(str2);
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    return 0;
}