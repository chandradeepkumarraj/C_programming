#include<stdio.h>

void main() {


int a=0,b=1,c;
int f=2;
printf("%d\n%d\n",a,b);
while(f<10)

{
    c=a+b;
    if((c%2)!=0) {
        printf("%d\n",c);
        f++;
    }
    a=b;
    b=c;
}

/*
int i,j;
for(i=1;i<=10;i++) {

    for(j=1;j<=i;j++) {
        printf("%c ",'A'+j-1);
    }
    printf("\n");

}



printf("%c",'a'+2);

*/







/*
int yr;
scanf("%d",&yr);
if((yr%4==0)||(yr%100!=0&&yr%4==0))
    printf("%d IS A LEAP YEAR.",yr);
else
    printf("%d IS not LEAP YEAR.",yr);
    */
getch();

}
