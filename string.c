#include<stdio.h>

int main() {

char name[]="CHOTU";
char name2[]={'c','h','o','t','u','\0'};
printf("%s",name2);
printf("\n%s\n",name);


char name3[15];
scanf("%[^\n]s",&name3);
printf("\n%s",name3);

char yname[2][8]={{"CHANDAN"},{"CHANDANI"}};
printf("\n%s",yname[0]);
printf("\n%s",yname[1]);



return 0;
}
