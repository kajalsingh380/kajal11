#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;
    char word[50], temp[50];
    int found = 0;
    f = fopen("file.txt","r");
    if(f == NULL) {
        printf("Error opening file\n");
        return 0;
    }
    printf("Enter word to search: ");
    scanf("%s", word);
    while(fscanf(f, "%s", temp) != EOF) {
        if(strcmp(word, temp) == 0) {
            found = 1;
            break;
        }
    }
    if(found) printf("Word found in file\n");
    else printf("Word not found\n");
    fclose(f);
    return 0;
}