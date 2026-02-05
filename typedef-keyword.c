#include<stdio.h>
#include<string.h>
typedef struct sfspublickschoolandjuniorcollage{
    int roll;
    float cgpa;
    char name[100];

}sfs;
int main(){
    //struct sfspublicschoolandjuniourcollage s1
    sfs s1;
    s1.roll=1;
    s1.cgpa=3.20;
    strcpy(s1.name,"abhinav");
    printf("%d %f %s",s1.roll,s1.cgpa,s1.name);
    return 0;
}
