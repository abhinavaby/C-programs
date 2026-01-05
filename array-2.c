#include<stdio.h>
void printnumbers(int arr[], int n);
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    printnumbers(arr,n);
    return 0;
    
}
void printnumbers(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}