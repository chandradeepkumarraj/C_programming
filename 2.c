#include<stdio.h>

int main() {

// WACP TO CALCULATE SUM OF FIRST N NATURAL NUMBERS USING WHILE LOOP

/*
int number,i=1,sum=0;   //declare value
printf("Enter the natural numbers=");
scanf("%d",&number);

while(i<=number) {
    sum+=i;            // addition the value of i to sum every time
    i++;

}
printf("\nThe sum of n Natural number is %d",sum);

*/


//WACP TO CALCULATE FACTORIAl OF A NUMBER USING FOR LOOP

int number,factorial=1;
printf("Enter the number=");
scanf("%d",&number);

for(int i=1;i<=number;i++) {

    factorial*=i;

    }
printf("\nThe factorial of %d ! is %d",number,factorial);




//WRITE USER-DEFINE FUNCTION IN C PROGRAMMING WHICH CALCULATES AND PRINTS THE FABINNACI SERIES UP TO N NUMBER

//WACP TO REVERSE THE GIVEN INTEGER NUMBER EXAMPLE- INPUT =1234 OUTPUT=4321

//WRITE A FUNCTION IN C PROGRAMMING TO CHECK IF THE TWO USER INPUT NUMBERS ARE PALINDROME OR NOT

return 0;
}
