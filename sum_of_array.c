#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;

    // Input 10 integers
    printf("Enter 10 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array to calculate the sum
    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of all elements = %d\n", sum); // Output the sum

    return 0;
}
