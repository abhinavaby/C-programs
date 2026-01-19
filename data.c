#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("write.txt","w");
    int age;
    float cgpa;
    char name[100];

    printf("enter your name: ");
    scanf("%s",name);
    printf("enter you age: ");
    scanf("%d",&age);
    printf("enter your cgpa: ");
    scanf("%f",&cgpa);
    fprintf(fptr,"%s\t%d\t%f",name,age,cgpa);
    fclose(fptr);
    return 0;

}