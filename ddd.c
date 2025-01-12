#include<stdio.h>
int main(){
int m=1,a=4;
//c=a<<1;
//printf("%d",c);
switch(m<<(2+m)){

case 4: printf("s");
break;
case 5: printf("d");
break;
case 8: printf("f");
break;
default:printf("t");
break;

}


//printf("%d ",a>>2);

return 0;
}
