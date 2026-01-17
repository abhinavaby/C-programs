#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};








int main(){
    int a;
    printf("enter the limit:");
    scanf("%d",&a);
     struct student ece[100];
    for(int i=0;i<a;i++){
       
        int roll;
        float cgpa;
        printf("\nenter the roll number: ");
        scanf("%d",&roll);
        printf("enter the cgpa: ");
        scanf("%f",&cgpa);
        ece[i].roll=roll;
        ece[i].cgpa=cgpa;
        char nam[20];
        printf("enter the name: ");
        scanf("%s",nam);
        strcpy(ece[i].name,nam);
       







    }
    
    for(int i=0;i<a;i++){
        printf("%s   %d   %.2f\n",ece[i].name,ece[i].roll,ece[i].cgpa);
    }
    
    

   




    return 0;
}