#include<stdio.h>
int sum(int,int);
int main(){
    int a,b;
    printf("enter the first and second number: ");
    scanf("%d %d",&a,&b);
    int s=sum(a,b);
    printf("sum=%d",s);
    return 0;



}
int sum(int a,int b){
    return a+b;

}