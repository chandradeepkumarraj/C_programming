#include<stdio.h>

int main(){
/*
int x=5;
int *addofx=&x;

printf("\n &x=%p",&x);
printf("\n sizeof=%d",sizeof(*addofx));
printf("\n sizeof=%d",sizeof(addofx));

printf("\n addressofx=%x",addofx);
*/
/*
int a=10;
char b='b';
float c=3.1467;
double d=1.258745896;

int *ap=&a;
char *bp=&b;
float *cp=&c;
double *dp=&d;
printf("\n Address of pointer");

printf("\nAddress of int ap=%p",ap);
printf("\nAddress of char bp=%p",bp);
printf("\nAddress of float cp=%p",cp);
printf("\nAddress of double dp=%p",dp);

printf("\n Size of pointer");

printf("Size of int ap=%d",sizeof(ap));
printf("\nSize of char bp=%d",sizeof(bp));
printf("\nSize of float cp=%d",sizeof(cp));
printf("\nSize of double dp=%d",sizeof(dp));

printf("\n \t USING *");

printf("\nSize of int ap=%d",sizeof(*ap));
printf("\nSize of char bp=%d",sizeof(*bp));
printf("\nSize of float cp=%d",sizeof(*cp));
printf("\nSize of double dp=%d",sizeof(*dp));

printf("\n Printing the value store at var");
printf("\nValue of integer ap=%d",*ap);
printf("\nValue of char bp=%c",*bp);
printf("\nValue of float cp=%f",*cp);
printf("\nValue of double dp=%lf",*dp);

*/
/*
char gender='F';
char arr[5]={'a','b','c','d','e'};


char *gval=&gender;
char *arrval=&arr;
printf("Value of gender print using pointer gval=%c",*gval);
for(int i=0;i<5;i++) {
        arrval=&arr[i];
printf("\nValue of arr print using pointer arrval=%c",*arrval);
}
return 0;

*/

/*
int arr[]={10,20,30};
int *addofarr=&arr;
printf("%d",*addofarr);
int *addnext=++addofarr;
printf("\n%d",*addnext);

*/

/*
int arr[5]={10,20,30,40,50};
int *addarr=&arr;
printf("\nValue of Arr=%d",*addarr);

for (int i=0;i<6;i++){
    printf("\nValue of Arr=%d",*addarr);
    addarr++;
}
printf("\nValue of Arr=%d",*addarr);

*/
int a,b;
printf("\nEnter the 2 number=");
scanf("%d %d",&a,&b);
printf("\nA=%d and B=%d",a,b);
int *ap=&a;
int *bp=&b;

printf("\nAfter swapping A=%d and B=%d",swap(*ap,*bp));


return 0;

}

void swap(int *aptr,int *bptr) {
 int temp;
 int a=*aptr,b=*bptr;
 temp=a;
 a=b;
 b=temp;
 //printf("\nAfter swapping A=%d and B=%d",a,b);


return (*aptr,*bptr);
}
