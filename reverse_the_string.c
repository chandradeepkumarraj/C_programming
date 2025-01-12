#include <stdio.h>

int main() {
    char str[50], reversed[50];
    int i, j, length = 0;

    // Input the string
    printf("Enter a string: ");
    scanf("%[^\n]s",&str);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }


    // Reverse the string
    for (i = length-1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[j] = '\0'; // Null-terminate the reversed string

    // Output the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}
