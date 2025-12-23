#include<stdio.h>
#include<math.h>
int add(int a,int b);
int main(){
    int a,b;
    printf("enter the number: ");
    scanf("%d",&a);
     printf("enter the number: ");
    scanf("%d",&b);
    int c=add(a,b);
    return 0;

    

}
int add(int a,int b){
    return a+b;
}