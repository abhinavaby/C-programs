#include<stdio.h>
int main(){
    int a=10;
    int b;
    
    int n=1;
    while(n==1){
        printf("enter the number: ");
        scanf("%d",&b);
        if(b==a){
            printf("correct guess\n");
            n=0;

        }
        else{
            printf("try again\n");
        }

    }
    return 0;
    
    
}