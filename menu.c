#include<stdio.h>
#include<conio.h>

int main() {


while(1){

printf("\n == Basic Calculator== ");
 int num1,num2,x=0,loopruning;
printf("\n Enter 1st number=");
scanf("%d",&num1);
printf("\n Enter 2st number=");
scanf("%d",&num2);
printf("\n Choose the Operator");
printf("\n 1. Addition\t 2. Subtraction");
printf("\n 3. Multiplication\t 4. Division");
printf("\n Enter the option:=>");
scanf("%d",&x);
if(x==1){
    printf("\n Result=%d",num1+num2);
}
else if(x==2){
    printf("\n Result=%d",num1-num2);
}
else if(x==3){
    printf("\n Result=%d",num1*num2);
}
else if(x==4) {
    printf("\n Result=%d",num1/num2);
}
else {
    printf("\n Incorrect input");
}

printf("\n\n Want to continue the calcuator or exit");
printf("\n 1. Continue\n Any key for Exit\n=>");
scanf("%d",&loopruning);
if(loopruning==1){
    continue;
}
else {
    break;
}

}
printf("\n======Program Ended=========");
return 0;
}
