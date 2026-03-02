#include<stdio.h>
void sumofdigits(int*);

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    sumofdigits(&num);
    return 0;

}
void sumofdigits(int* a){
    int sum=0;
    while(*a!=0){
        sum+=*a%10;
        *a/=10;
    }
    printf("the sum of digits is: %d", sum);
}