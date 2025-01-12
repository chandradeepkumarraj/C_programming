#include<stdio.h>

int sumOfDiagonals(int matrix[3][3], int size);


int main() {
    int matrix[3][3];
    int i, j;

    // User input for the 3x3 matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the sum of the diagonal elements
    int sum = sumOfDiagonals(&matrix, 3);
    printf("\nThe sum of the diagonal elements is: %d\n", sum);

    return 0;
}


// Function to calculate the sum of diagonal elements
int sumOfDiagonals(int matrix[3][3], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // Sum of main diagonal elements
    }
    return sum;
}
/*
void main() {

printf("%d",printf("%d",printf("Hello")));


}
int sum() {

int a,b;
scanf("%d %d",&a,&b);

return (a+b);
}
*/
