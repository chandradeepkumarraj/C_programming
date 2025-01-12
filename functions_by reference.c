#include <stdio.h>


// square Function to square value by pointer
 int square(int *z){
    *z *= *z;
    printf("square function: %d",*z);
 }
int main(void) {

    int y = 200;

    // Call square function
     square(&y);
    // Print the original variable
    printf("\nmain function after square: %d",y);
    return 0;
}
