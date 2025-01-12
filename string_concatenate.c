#include <stdio.h>

int main() {
    char str1[50], str2[50], result[100];
     int i = 0, j = 0;

    // Input the first string
    printf("Enter the first string:");
    scanf("%s",&str1);

    // Input the second string
    printf("Enter the second string:");
    scanf("%s",&str2);


   // Concatenate the strings

    // Copy the first string to the result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }


    // Copy the second string to the result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the result string
    result[i] = '\0';

    // Output the concatenated string
    printf("\nConcatenated string: %s", result);

    return 0;
}
