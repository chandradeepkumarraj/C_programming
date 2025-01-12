#include<stdio.h>
#include<string.h>


struct Student{
    int rollno;
    char name[15];
    float marks;

} st1;

int main() {
    /*
    st1.rollno=1;
    strcpy(st1.name,"chandradeep");
    st1.marks=25.5;

    st2.rollno=2;
    strcpy(st2.name,"chandan");
    st2.marks=50.5;
    printf("Stdent details-1=>\n");
    printf("%d \t| %s \t| %.2f",st1.rollno,st1.name,st1.marks);
    printf("\nStdent details-2=>\n");
    printf("%d \t| %s \t| %.2f",st2.rollno,st2.name,st2.marks);
    */

    struct Student stu_obj[1]={{1,"Chandan",80.5,123456789}};
    printf("Student 1==>\n %d | %s | %.2f | %d",stu_obj[0].rollno,stu_obj[0].name,stu_obj[0].marks,stu_obj[0].contact1.phone);
return 0;
}
