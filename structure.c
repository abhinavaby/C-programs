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
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    
    

    


    return 0;
}