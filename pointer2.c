#include <stdio.h>



int main() {
    int num1, num2,temp;
    int *a=&num1,*b=&num2;
    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Print original values
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers using pointers
    temp=*a;
    *a=*b;
    *b=temp;
    // Print swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1,num2 );


    return 0;
}
