#include<stdio.h>
struct data{
    char name[20];
    int class;
    char division;
    float mark;

};
int main(){
    int n;
    printf("Enter the number of entries:");
    scanf("%d",&n);
    struct data s[n];
    for(int i=0;i<n;i++){
        printf("Enter the name:");
        scanf("%s",s[i].name);
        printf("Enter the class:");
        scanf("%d",&s[i].class);
        printf("Enter the division:");
        scanf(" %c",&s[i].division);
        printf("Enter the mark:");
        scanf("%f",&s[i].mark);
    }
    printf("Name\tClass\tDivision\tMark\n");
    for(int i=0;i<n;i++){
        printf("%s\t%d\t%c\t\t%.2f\n",s[i].name,s[i].class,s[i].division,s[i].mark);
    }
    printf("\n");
    printf("students failed:\n");
    printf("Name\tClass\tDivision\tMark\n");
    for(int i=0;i<n;i++){
        if(s[i].mark<40){
            printf("%s\t%d\t%c\t\t%.2f\n",s[i].name,s[i].class,s[i].division,s[i].mark);
        }
    }
    return 0;
}
