#include<stdio.h>

int main() {

int a,b;
printf("Enter the 1st number=");
scanf("%d",&a);
printf("\nEnter the 2st number=");
scanf("%d",&b);

add(&a,&b);
sub(&a,&b);

mul(&a,&b);
div(&a,&b);


return 0;

}

void add(int *ap,int *bp) {

printf("\nSum=%d",*ap+*bp);

}


int sub(int *ap,int *bp) {

printf("\nSub=%d",*ap-*bp);

return 0;
}


void mul(int *ap,int *bp) {

printf("\nMul=%d",*ap * *bp);

}

void div(int *ap,int *bp) {

printf("\nDiv=%d",*ap / *bp);

}
