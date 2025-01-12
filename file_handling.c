/* Write a program to open a file, write your name and marks into
it, and then read and display the content. */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    FILE *fp; //pointer object for accessing file functions
    char name[15];
    int marks;


    //Open the file for writing
    fp=fopen("student.txt","w"); //fopen(file_name,operation to be done[w-write, r-read])
    if(fp==NULL){
        printf("File Creation failed!!");
        return 1;
    }
    //Writing data into file.
    printf("Enter your name: ");
    scanf("%[^\n]s",&name);
    printf("\nEnter your marks: ");
    scanf("%d",&marks);
    fprintf(fp,"Name: %s\nMarks: %d\n",name,marks);
    fclose(fp);

    //Reading data in the file
    fp=fopen("student.txt", "r");
    if(fp==NULL){
        printf("Error!! File not found.");
        return 1;
    }

    //Reading and displaying
    printf("\nContent of file is-\n");
    char ch;
    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
