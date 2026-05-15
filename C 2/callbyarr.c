#include<stdio.h>
void add(int*,int);
int main(){
    int arr[4]={1,2,3,4};
    add(arr,4);
    return 0;



}
void add(int* p,int a){
    for(int i=0;i<a;i++){
        printf("%d ",*(p+i)+2);
    }
}