#include<stdio.h>
#include<string.h>
struct data{
    int age;
    char grade;
    float cgpa;
    char name[100];
};
int main(){
    struct data s1;
    s1.age=12;
    s1.grade='A';
    strcpy(s1.name,"abhinav");
    s1.cgpa=9.55;
    printf("%s\t%d\t%c\t%.2f\n",s1.name,s1.age,s1.grade,s1.cgpa);
    struct data s2;
    s2.age=13;
    s2.grade='A';
    strcpy(s2.name,"abel");
    s2.cgpa=9.21;
    printf("%s\t%d\t%c\t%.2f",s2.name,s2.age,s2.grade,s2.cgpa);
    return 0;


}


