// Array of Structure
/*
#include<stdio.h>
#include<string.h>
struct Student{
    char name[15];
    int roll;
    float marks;
};

int main(){
    struct Student stu_obj[3]={ {"Abhi",1,9.5},{"Aman",2,4.0},{"Ashish",3,6.0} }; //Declaration of Array object

    for(int i=0;i<3;i++){
        printf("RollNo- %d | Name- %s | Marks %.1f\n",stu_obj[i].roll,stu_obj[i].name,stu_obj[i].marks);
    }
    return 0;
}
*/
//Structure of Structure

#include<stdio.h>
#include<string.h>
struct Personal{
    char name[15];
    int age;
};
struct Professional{
    int roll;
    float marks;
    struct Personal persInfo;

};

int main(){
    struct Professional profInfo;

    strcpy(profInfo.persInfo.name,"Anjaan Admi");
    profInfo.persInfo.age=21;
    profInfo.roll=12;
    profInfo.marks=20.5;

    printf("Roll no- %d | Name- %s | Age- %d | Marks- %.1f",profInfo.roll,profInfo.persInfo.name,profInfo.persInfo.age,profInfo.marks);


   return 0;
}
