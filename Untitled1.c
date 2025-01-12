#include<stdio.h>
int perimeter(int, int,int);
int main(){
int a,b,c;
float br,ht;
int e;
printf("enter your choice\n ");
printf("enter 1 for perimeter\n ");
printf("enter 2 for area\n ");

scanf("%d",&e);
 printf("enter the value of a, b and c\n");
scanf("%d%d%d",&a,&b,&c);
int peri=perimeter(a,b,c);
printf("peri =%d\n",peri);
switch(e){
case 1:
printf("pr=%d",peri);
break;
case 2: printf("enter the value of br and ht\n");
scanf("%f%f",&br,&ht);
    float area=(br*ht)/2;
printf("area=%.2f",area);
break;
}
return 0;
}
int perimeter(int a, int b,int c){
int result=a+b+c;
return result;
}
