#include <stdio.h>

int main() {
    int arr[5], i, temp;

    // Input 10 integers
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop to reverse the array
    for (i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }

    // Output the reversed array
    printf("\nReversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
