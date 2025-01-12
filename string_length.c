#include <stdio.h>

int main() {
    char str[50];
    int length = 0,size;

    // Input the string
    printf("Enter a string:");
    scanf("%[^\n]s",&str);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }


    // Output the length of the string
    printf("Length of the string: %d\n", length);
    return 0;
}
