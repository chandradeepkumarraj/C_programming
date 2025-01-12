#include <stdio.h>

int main() {
    int num1, num2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    gcd = num1; // or num2, since num1 == num2
    printf("GCD = %d\n", gcd);

    return 0;
}
