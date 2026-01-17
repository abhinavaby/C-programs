#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1);
void printinfo2(struct student *s1);

int main(){
    struct student s1={1,3.445,"abhinav"};
    struct student *s1=&s1;
    printinfo(s1);
    printf("%d",s1.roll);
    printinfo2(&s1);
    printf("%d",s1.roll);
    return 0;





}
void printinfo(struct student s1){

    printf("%d     %f   %s",s1.roll,s1.cgpa,s1.name);
    s1.roll=20;
}
void printinfo(struct student *s1){

    printf("%d     %f   %s",s1->roll,s1->cgpa,s1->name);
    s1->roll=20;
}