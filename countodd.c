#include<stdio.h>
int countodd(int arr[],int n);
int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int oddcount=countodd(arr,n);
    printf("number of odd elements in the array: %d",oddcount);
    return 0;


}
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}