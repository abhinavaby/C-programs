#include<stdio.h>
int main(){
    int a;
    printf("enter the row number: ");
    scanf("%d",&a);
    int arr[a][a],b[a][a];
    printf("------------first array----------------\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("enter the element ar %d %d index: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("----------second array------------------\n");
    

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("enter the element ar %d %d index: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
       printf("-----------------sum------------------\n");
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            // %4d reserves 4 spaces for the number, aligning it to the right
            printf("%4d ", arr[i][j] + b[i][j]);
        }
        printf("\n");
    }

   
    
    return 0;

    


}