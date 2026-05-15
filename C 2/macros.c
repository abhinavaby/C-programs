#include<stdio.h>
int main(){
    #define a 10
    printf("a=%d\n",a);
    
    #define sq(x) (x*x)
    printf("square of 10=%d\n",sq(a));
    #define l ("hi guys")
    printf(l);
    printf("\n");
    #define area(x) (3.14*x*x)
    printf("area of circle of radius 3 is %.2f\n",area(3));
    printf("time:%s\ndate:%s\nline:%d\nfile:%s\n",__TIME__,__DATE__,__LINE__,__FILE__);
    #define c(x,y) do{\
        printf("value of x is %d\n",x); \
        printf("value of y is %d\n",y); \
        }while(0)
    c(1,2);
    #define s(x) #x
    printf("%s\n",s(1));
    int ab=12;
    #define con(x,y) x##y
    printf("%d",con(a,b));



    return 0;


}