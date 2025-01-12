//#include<stdio.h>

//int main() {

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

/*
int number,factorial=1;
printf("Enter the number=");
scanf("%d",&number);

for(int i=1;i<=number;i++) {

    factorial*=i;

    }
printf("\nThe factorial of %d ! is %d",number,factorial);


*/

//WRITE USER-DEFINE FUNCTION IN C PROGRAMMING WHICH CALCULATES AND PRINTS THE FABINNACI SERIES UP TO N NUMBER



//WACP TO REVERSE THE GIVEN INTEGER NUMBER EXAMPLE- INPUT =1234 OUTPUT=4321
/*
int number,reverse,temp,original;
printf("Enter the number=");
scanf("%d",&number);
original=number;
while (number!=0){
    temp=number%10;
    reverse=reverse*10+temp;
    number=number/10;

}

printf("The reverse of %d number is %d",original,reverse);

*/

//WRITE A FUNCTION IN C PROGRAMMING TO CHECK IF THE TWO USER INPUT NUMBERS ARE PALINDROME OR NOT
/*
int num1;
printf("Enter the decimal number");
scanf("%d",&num1);
f(num1);

return 0;
}
void f(int n) {
if(n==0 || n==1) {
    printf("%d",n);
    return;
}
else {
    f(n/2);
   int r=n%2;
    printf("%d",r);
}
*/


/*
    int num, i;
    unsigned long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Calculating factorial using a for loop
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("Factorial of %d = %lu\n", num, factorial);
    return 0;


}
*/

