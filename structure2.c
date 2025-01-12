#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[15];
    float marks;

    };

    int main() {

    struct student s1;
    // structure pointer declaration
    struct student *ptr=&s1;

    s1.roll=10;
    strcpy(s1.name,"Arun");
    s1.marks=20.5;

    printf(" %d |  %s  | %.2f",ptr->roll,ptr->name,ptr->marks);



    return 0;
    }
