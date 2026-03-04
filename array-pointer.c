#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int *p=a;
    printf("%p\n", p);
    printf("%p\n", (p+1));
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    for(int i=0;i<5;i++){
        printf("%d ", *(p+i));
    }
    return 0;
}
