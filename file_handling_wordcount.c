#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    FILE *fp; //pointer object for accessing file functions
    int words=0,lines=0;


    //Reading data in the file
    fp=fopen("counting.txt", "r");
    if(fp==NULL){
        printf("Error!! File not found.");
        return 1;
    }
    //Reading and displaying
    printf("\nCount of lines and words-\n");
    char ch;

   //counting words and lines
    while((ch=fgetc(fp))!=EOF){
        if(ch==' ' || ch=='\n'){
            words++;
        }
        if(ch=='\n'){
            lines++;
        }
    }
    fclose(fp);
printf("\nNumber of words= %d",words+1);
printf("\nNumber of lines= %d",lines+1);

    return 0;
}
