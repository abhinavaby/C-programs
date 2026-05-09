#include<stdio.h>
int main(){
    char a;
    printf("enter the charecter(A,B,C,D)");
    scanf("%c",&a);
    switch (a){
        case 'A':
            printf("hi A");
            break;
        case 'B':
            printf("hi B");
            break;
        case 'C':
            printf("hi C");
            break;
        case 'D':
            printf("hi D");
            break;
        default:
            printf("invalid char");




    }
    return 0;
    
}