#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("enter the number to find the factorial: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;


    }
    printf("factorial of %d = %d",n,fact); 
    return 0;

}