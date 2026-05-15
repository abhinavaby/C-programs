#include<stdio.h>
void arr(int arr[],int len);
int main(){
    int s;
    printf("enter the limit: ");
    scanf("%d",&s);
    int arrr[s];
    for(int i=0;i<s;i++){
        printf("enter the element at index %d: ",i);
        scanf("%d",&arrr[i]);

    }
    arr(arrr,s);
    return 0;
    


}
void arr(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}