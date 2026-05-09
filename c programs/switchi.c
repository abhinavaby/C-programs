#include<stdio.h>
int main(){
    int n;
    printf("enter the number(1,2,3,4): ");
    scanf("%d",&n);
    switch (n){
        case 1:
            printf("hi %d",n);
            break;
        case 2:
            printf("hi %d",n);
            break;
        case 3:
            printf("hi %d",n);
            break;
        case 4:
            printf("hi %d",n);
            break;
        default:
            printf("error"); 
    }
    return 0;

}