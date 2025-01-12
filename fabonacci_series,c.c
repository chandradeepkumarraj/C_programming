#include<stdio.h>

int main() {
int num,t1,t2,nextterm;
t1=0,t2=1,nextterm=t1+t2;
printf("Enter number:");
scanf("%d",&num);
printf("Fibonacci series : %d, %d",t1,t2);
// calculating fabonacci series
while(num>=nextterm) {
     printf(", %d ",nextterm);
     t1=t2;
     t2=nextterm;
     nextterm=t1+t2;

}


return 0;
}
