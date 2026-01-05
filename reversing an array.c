#include<stdio.h>
void reverseArray(int arr[], int n);
int main(){
  int n=5;
  int arr[5]={1,2,3,4,5};
  reverseArray(arr, n);
}
void reverseArray(int arr[], int n){
    int reversed[n];
    for(int i=n;i>0;i--){
        reversed[n-i]=arr[i-1];
    }
    printf("reversed array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",reversed[i]);      


        }
}