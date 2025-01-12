
#include<stdio.h>

int main() {

int matrix[3][3],transpose[3][3],i,j;


for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    printf("Enter element of matrix(%d,%d)=",i,j);
    scanf("%d",&matrix[i][j]);
    }
}
//print the matrix
printf("\nElement of matrix:\n");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    printf("%d ",matrix[i][j]);

    }
    printf("\n");
}
// calculate  the transpose matrix
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       transpose[j][i]=matrix[i][j];

    }
}
//print the transpose matrix
  printf("\nElement of transpose matrix:\n");
for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    printf("%d ",transpose[i][j]);

    }
    printf("\n");
}

return 0;
}

