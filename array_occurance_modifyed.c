#include<stdio.h>

void countFrequency(int arr[],int len){
    int count=0;
    int counted[len];

    for(int i=0;i<len;i++){
        counted[i]=0;  //initially, counted =0
    }

    for(int i=0;i<len;i++){
        count=1;
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
                counted[j]=1;
            }
        }
        if(counted[i]==0){
        printf(" %d\t=\t%d\n",arr[i],count);
        }
    }
}

int main(){
    int arr[]={1,2,5,2,3,4,5,4,4};
    int len=sizeof(arr)/sizeof(arr[0]); //no of element in array
    // printf("len=%d\n",len);
    printf("Array element & their frequency:\n Numbers  Occurence\n");
    countFrequency(arr,len);

    return 0;
}


