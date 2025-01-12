#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Generating multiplication table using nested loops
    while (i<=10){
    for (i = 1; i <= 10; i++) {

            printf("%d x %d = %d\t", num, i, num * i);

        printf("\n");
    } }

    return 0;
}
