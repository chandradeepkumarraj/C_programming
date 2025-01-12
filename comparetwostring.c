#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    // Input strings from the user
    printf("Enter the first string: ");
    scanf("%s",&str1);
    printf("Enter the second string: ");
   scanf("%s",&str2);

    // Compare the strings using strcmp() function
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
