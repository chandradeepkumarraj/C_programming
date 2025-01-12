#include<stdio.h>
void countFrequency(int arr[],int len){
    int count=0;
    int counted[7];

    for(int i=0;i<7;i++){
        counted[i]=0;  //initially, counted =0
    }

    for(int i=0;i<7;i++){
        count=1;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                count++;
                counted[j]=1;
            }
        }
        if(counted[i]==0){
        printf("%d=%d\n",arr[i],count);
        }
    }
}
int main(){
    int arr[]={1,2,2,3,4,4,4};
    int len=sizeof(arr)/sizeof(arr[0]); //no of element in array
    printf("len=%d",len);
    printf("Array element & their frequency:\n");
    countFrequency(arr,len);

    return 0;
}
