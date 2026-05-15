#include<stdio.h>
void swap(int*,int*);
int main(){
    int n,m;
    printf("enter the elements: ");
    scanf("%d %d",&n,&m);
    swap(&n,&m);
    printf("swapped= n=%d m=%d",n,m);
    return 0;
    



}
void swap(int* a , int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}