#include<stdio.h>
#include<string.h>
struct data{
    char name[100];
    int age;

};
int main(){
    int c;
    printf("enter the limit: ");
    scanf("%d",&c);
    struct data s[c];
     getchar(); 
    for(int i=0;i<c;i++){
        printf("enter the name: ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("enter your age: ");
        scanf("%d",&s[i].age);
        getchar();


    }
    printf("--------------list--------------\n");
    for(int i=0;i<c;i++){
        printf("%s\t%d\n",s[i].name,s[i].age);



    }

}