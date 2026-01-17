#include<stdio.h>
#include<string.h>
struct students{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct students s1 ={1,3.5,"abhinav"};
    printf("roll=%d\n",s1.roll);
    printf("cgpa=%f\n",s1.cgpa);

    struct students *ptr = &s1;
    printf("student roll=%d\n",(*ptr).roll);

    //arrow operator
    
    printf("student roll=%d\n",ptr->roll);
    printf("name=%s\n",ptr->name);
    printf("cgpa=%f",ptr->cgpa);



   
    

    return 0;
}
