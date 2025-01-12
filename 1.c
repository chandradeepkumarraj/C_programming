#include<stdio.h>

int main() {

// WACP TO CALCULATE SUM OF FIRST N NATURAL NUMBERS USING WHILE LOOP


int number,i=1,sum=0;
printf("Enter the natural numbers=");
scanf("%d",&number);

while(i<=number) {
    sum+=i;
    i++;
}
printf("\nThe sum of n Natural number is %d",sum);

return 0;
}
