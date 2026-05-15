#include<stdio.h>
int main(){
    int arr[]={5,2,3,4,5};
    int a=sizeof(arr)/sizeof(int);
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
    
}