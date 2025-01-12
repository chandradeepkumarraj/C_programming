#include<stdio.h>
/*
int main() {

char str[]="chandan_kumar";
int sizeofstr;

sizeofstr=sizeof(str)-1;
printf("\nLength of string is=%d",sizeofstr);

char str[]="chandan_kumar";
char str1[]="raj_hero";
char strcont[];
strcont[]=str1+str2;
printf("\nString after concatenate str and str1=%s",strcon);



return 0;
}
*/
#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    int i;
    char temp;
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    // User input for the string
    printf("Enter a string: ");
    scanf("%[^\n]c",&str);

    // Call the reverse function
    reverseString(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
