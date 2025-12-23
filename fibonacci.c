#include <stdio.h>
int main(){
    int a;
    printf("enter the limit: ");
    scanf("%d",&a);
    int c=0,b=1;
    printf("0,1,");
    for(int i=1;i<=a;i++){
        int d=b;
        b=c+b;
        c=d;
        printf("%d, ",b);
       




    }
     return 0;



}   
