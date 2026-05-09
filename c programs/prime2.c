#include<stdio.h>
int main(){
    int n;
    printf("enter the range: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count+=1;

            }
        }
        if(count==2){
            printf("%d ",i);
        }

    }
    return 0;
    
}