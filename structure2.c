#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    float cgpa ;
    char name[300];

};



int main(){
    struct student s1;
    s1.roll=123;
    s1.cgpa=9.55;
    //s1.name="Abhinav Aby";
    strcpy(s1.name,"Abhinav");
    printf("%s\t",s1.name);
    printf("%d\t",s1.roll);
    printf("%.2f\n",s1.cgpa);

    printf("");

     struct student s2;
    s2.roll=13;
    s2.cgpa=3.55;
    //s1.name="Abhinav Aby";
    strcpy(s2.name,"Aby");
    printf("%s\t",s2.name);
    printf("%d\t",s2.roll);
    printf("%.2f\n",s2.cgpa);

    printf(""); 

     struct student s3;
    s3.roll=12;
    s3.cgpa=8.55;
    //s1.name="Abhinav Aby";
    strcpy(s3.name,"Abel");
    printf("%s\t",s3.name);
    printf("%d\t",s3.roll);
    printf("%.2f\n",s3.cgpa);



    

    


    return 0;
}