#include<stdio.h>
int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("value of i from pointer to pointer: %d", **pptr);
    return 0;







}
