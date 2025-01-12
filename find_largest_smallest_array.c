#include <stdio.h>

int main() {
    int arr[10], i, largest, smallest;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("\nLargest number = %d", largest);
    printf("\nSmallest number = %d", smallest);

    return 0;
}
