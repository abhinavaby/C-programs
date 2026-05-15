#include<stdio.h>
void sumofdigits(int a);
int main(){
    int n;
    printf("enter the digit: ");
    scanf("%d",&n);
    sumofdigits(n);
    return 0;

}
void sumofdigits(int a){
    int sum=0;
    while(a!=0){
        sum+=a%10;
        a=a/10;

    }
    printf("sum=%d",sum);
}
