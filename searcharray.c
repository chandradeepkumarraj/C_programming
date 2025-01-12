#include <stdio.h>

int main() {
    int arr[5], i, searchElement, found = 0;

    // Input 5 integers
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Loop to search for the element
    for (i = 0; i < 5; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }

    // Output the result
    if (found)
        printf("Element %d found at index %d", searchElement, i);
    else
        printf("Element %d not found in the array", searchElement);

    return 0;
}
