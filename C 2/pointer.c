#include<stdio.h>
int main(){
    int n=3;
    int *ptr;
    ptr=&n;
    printf("%d %p \n",*ptr,ptr);
    *ptr+=1;
    printf("%d %d\n",n,*ptr);
    int **ptrr=&ptr;
    printf("%d\n",**ptrr);
    **ptrr+=1;
    printf("%d %d %d",n,*ptr,**ptrr);

    return 0;


}