#include<stdio.h>
int main(){
    int n;
    printf("enter your age: ");
    scanf("%d",&n);
    if(n>18){
        printf("you are able to vote");
    }
    else if(n==18){
        printf("hello beginner votter");
    }
    else{
        printf("you cant vote");
    }
    return 0;
}