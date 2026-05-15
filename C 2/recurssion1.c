#include<stdio.h>
int sumofdigits(int n);
int main(){
    int n;
    printf("entr the number: ");
    scanf("%d",&n);
    int s=sumofdigits(n);
    printf("sum of digits=%d",s);
    return 0;

}
int sumofdigits(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+sumofdigits(n/10);

    }
}