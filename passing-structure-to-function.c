#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};
void fun(struct student s)
{
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}
int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter name: ");
        scanf("%s", &s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    for(int i=0;i<3;i++)
    {
        fun(s[i]);
    }
    
    return 0;
}
