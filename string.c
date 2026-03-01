#include<stdio.h>
#include<string.h>
int main(){
    char firstname[20], lastname[20];
    printf("enter your first name: ");
    scanf("%s",firstname);
    printf("enter your last name: ");   
    scanf("%s",lastname);
    printf("full name: "); 
    for(int i=0;firstname[i]!='\0';i++){
        printf("%c",firstname[i]);
    }
    printf(" ");
    for(int i=0;lastname[i]!='\0';i++){
        printf("%c",lastname[i]);
    }
    return 0;
