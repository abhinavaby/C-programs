#include<stdio.h>
int main(){
    int a;
    printf("enter the row number: ");
    scanf("%d",&a);
    int arr[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("enter the element ar %d %d index: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("---------------array-----------------\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    printf("--------------------------------------");
    return 0;


}
