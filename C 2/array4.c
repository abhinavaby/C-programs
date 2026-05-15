#include<stdio.h>
int main(){
    int a;
    printf("enter the row number: ");
    scanf("%d",&a);
    int arr[a][a];
    printf("------------first array----------------\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("enter the element ar %d %d index: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
  
    printf("\n");
    printf("-------------sum of both diagonal elements--------\n");
    int sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==j || i+j==(a-1)){
                sum+=arr[i][j];

            }
        }
    }   
    
    printf("sum=%d",sum);
    return 0;
    

}