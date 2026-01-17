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
    printf("%d %f %s",s1.roll,s1.cgpa);
    return 0;
}
