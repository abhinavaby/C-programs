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
    printf("--------------product--------------\n");
     for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            int c=0;
            for(int v=0;v<a;v++){
                c+=arr[i][v]*b[v][j];
                


            }
            printf("%4d ",c);
            
        }
        printf("\n");

    }
    return 0;

    
}