#include <stdio.h>
float percentage(float a,float b,float c);
int main(){
    float a,b,c;
    printf("enter marks in science: ");
    scanf("%f",&a);
    printf("enter marks in maths: ");
    scanf("%f",&b);
    printf("enter marks in sanskrit: ");
    scanf("%f",&c);
    printf("the marke persentage is %.2ff",percentage(a,b,c));
    return 0;



}
float percentage(float a,float b,float c){
    return ((a+b+c)/300)*100;
}
