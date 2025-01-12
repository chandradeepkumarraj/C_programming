#include <stdio.h>

int main() {
    int arr[3], i;
    int *ptr;

    // Input elements of the array
    printf("Enter 3 nummber: ");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr; // Point to the first element of the array

    // Print the addresses of consecutive elements
    printf("Addresses & its value of consecutive elements in the array:\n");
    for (i = 0; i < 3; i++) {
        printf("Address of arr[%d] = %p and its Value=%d\n", i,(ptr + i),(*(ptr + i)));
    }

    return 0;
}
