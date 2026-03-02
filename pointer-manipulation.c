#include<stdio.h>
void num(int*);
int main(){
    int a;
    printf("enter the number: \n");
    scanf("%d", &a);
    num(&a);
    printf("the updated number is: %d\n", a);
    return 0;
}
void num(int* a){
    printf("the number address is  is: %p\n", a);
    printf("the number is: %d\n", *a);
    printf("updating the number adding 10\n");
    *a+=10;
    
}   