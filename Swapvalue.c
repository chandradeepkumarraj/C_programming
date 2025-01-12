#include<stdio.h>

int main() {

int a=5,b=7;
printf("value of a=%d and B=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping Value of a=%d and b =%d",a,b);

return 0;
}
