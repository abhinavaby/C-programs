#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("entr the number: ");
    scanf("%d",&n);
    int s=fact(n);
    printf("sum of digits=%d",s);
    return 0;

}
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*fact(n-1);

    }
}