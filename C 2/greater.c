#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    printf("enter the third number: ");
    scanf("%d",&c);
    int largest;
    if(a>b){
        if(a>c){
            largest=a;
        }
    }
    else if(b>c){
        largest=b;
    }
    else{
        largest=c;
    }
    printf("largest number =%d",largest);
    return 0;

    

}