#include<stdio.h>
#include<ctype.h>

int main() {
   /* int a,b,c,num1,num2,final;
    printf("Enter the First number= ");
    scanf("%d",&a);
    printf("\nEnter the Second number= ");
    scanf("%d",&b);
    printf("\nEnter the Third number= ");
    scanf("%d",&c);
    if(a>b){
        num1=a;
    }
    else {
        num1=b;
    }
    if(b>c) {
        num2=b;
    }
    else {
        num2=c;
    }
    if (num1>num2){
            final=num1;
        printf("\nThis is greatest among 3 input= %d",final);
    }
    else {
        final=num2;
        printf("\nThis is greatest among 3 input= %d",final);
    } */

   /* int a,b,option;
     printf("\n Enter the First number:= ");
    scanf("%d",&a);
     printf("\n Enter the Second number:= ");
    scanf("%d",&b);
    printf("\nSelect one of the Operation you want to perform\n");
    printf("1. Addition \t 2. Subtraction \n");
    printf("3. Multiply \t 4. Division ");
    printf("\n Enter the Option= ");
    scanf("%d",&option);

    switch(option) {
        case 1: {printf("\nSum of two number is= %d",a+b);
                break; }
        case 2: {printf("\nSubtraction of two number is= %d",a-b);
                break; }
        case 3: {printf("\nMultiply of two number is= %d",a*b);
                break; }
        case 4: { if(a>b) {
                    printf("\nDivision of the a by b number is= %d",a/b);
                        }
                    else {
                        printf("\nDivision of the b by a number is= %d",b/a);
                        }
                break;
                }
        default: {  printf("Choose the correct option");  }
        } */

        char grade;
        printf("Enter the grade: ");
        scanf("%c",&grade);
        char stable_grade= tolower(grade);
        switch(stable_grade) {
        case 'a': { printf("\n Excellent");
                break; }
        case 'b': { printf("\n Very Good");
                break; }
        case 'c': { printf("\n Average");
                break; }
        case 'd': { printf("\n Below Average");
                break; }
        case 'f': { printf("\n Fail");
                break; }
        default: { printf("\nIncorrect Grade");
                break; }
        }
    getch();
    return 0;
}

