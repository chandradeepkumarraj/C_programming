#include<stdio.h>
#include<string.h>


union student {
    int roll;
    char name[15];
    float marks;

    };

    int main() {

    union student s1;
    // union pointer declaration
    union student *ptr=&s1;

    s1.roll=10;
     printf("Roll: %d  size: %d\n", ptr->roll,sizeof());
    strcpy(s1.name,"Arun");
       printf("Name: %s\n", ptr->name);
    s1.marks=20.5;



   printf("Marks: %.2f\n",ptr->marks);

    return 0;
    }
