#include<stdio.h>
#include<math.h>
void circle(int r);
void square(int s);
void rectangle(int l,int b);
int main(){
    int choice;
    printf("area finder\n");
    printf("enter 1:circle 2:square 3:rectangle: ");
    scanf("%d",&choice);
    if(choice==1){
        int r;
        printf("enter the radius: ");
        scanf("%d",&r);
        circle(r);


    }
    else if(choice==2){
        int s;
        printf("enter the side: ");
        scanf("%d",&s);
        square(s);


    }
    else if(choice==3){
        int l;
        int b;
        printf("length: ");
        scanf("%d",&l);
        printf("breadth: ");
        scanf("%d",&b);
        rectangle(l,b);

    }
    else{
        printf("invalid option");

    }
    return 0;
}
void circle(int r){
    float pi=3.14;
    printf("area of circle: %f",pi*r*r);


}
void square(int s){
    printf("area: %d",s*s);
}
void rectangle(int l,int b){
    printf("area: %d",l*b);
}
