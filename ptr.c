#include<stdio.h>
int main(){
int i,j,k;
for(i=0;i<5;i++){
for(j=0;j<=i*2;j++){
     printf(" ");
}
for(k=0;k<5-i;k++){

   printf("*");

}
printf("\n");
}
for(i=5;i>=0;i--){
for(j=0;j<=i*2;j++){
     printf(" ");
}
for(k=0;k<5-i;k++){

   printf("*");

}
printf("\n");
}
return 0;

}
