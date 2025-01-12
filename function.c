#include<stdio.h>

void sum();             // declare sum() sunction
int main() {            // main funtion

printf("\t Code to learn functions");
printf("\nThis is main function");
sum();          //calling the sub function
printf("\nBack to main()");
return 0;

}

void sum() {             //define sum() function
int num1,num2;
printf("\nThis is sum funtion");
printf("\nEnter 2 numbers=");
scanf("%d %d",&num1,&num2);
printf("\nSum of number is= %d",num1+num2);
return;
printf("\nEnd the sum()");

}
