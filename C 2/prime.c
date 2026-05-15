#include<stdio.h>
int main(){
    int n;
    printf("enter the number to find prime: ");
    scanf("%d",&n);
    int b=0;
    for(int i=0;i<=n;i++){
        if(n%i==0){
            b+=1;
            
        }

    }
    if(b==2){
        printf("its a prime number");
    }
    else{
        printf("its not a prime number");
    }
}