#include<stdio.h>
#include<ctype.h>

//void main() {

/*
// Program for calculation of basic operation using switch
int num1,num2;
char operation;

printf("\nChoose your Operator /,*,+,- : ");
scanf("%c",&operation);
printf("\nEnter the First number= ");
scanf("%d",&num1);
printf("\nEnter the Second number= ");
scanf("%d",&num2);
    switch(operation) {
case '/' : printf("\nDivision of entered number is %d",num1/num2);
            break;
case '*' : printf("\nMultiplication of entered number is %d",num1*num2);
            break;
case '+' : printf("\nAddition of entered number is %d",num1+num2);
            break;
case '-' : printf("\nSubtraction of entered number is %d",num1-num2);
            break;
default :  printf("\nEnter the correct input");
    }
*/
/*
char grade;
printf("\nEnter the grade A,B,C,D and F= ");
scanf("%c",&grade);
char stable_grade=toupper(grade);

switch(stable_grade) {
case 'A' : printf("\nExcellent");
            break;
case 'B' : printf("\nVery Good");
            break;
case 'C' : printf("\nAverage");
            break;
case 'D' : printf("\nBelow Average");
            break;
case 'F' : printf("\nFail");
            break;
default : printf("Incorrect grade");
}
*/

int main() {
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);
    // Using switch-case to determine the grade based on marks
    switch (marks / 10) {
        case 10:
        case 9:
            printf("\nGrade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
         case 5:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }
    return 0;
}




