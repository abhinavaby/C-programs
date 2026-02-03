#include<stdio.h>
int main(){
int a,b,j;
printf("enter the no of elements in the array: ");
scanf("%d",&a);
printf("enter the no of elements in 2d: ");
scanf("%d",&b);
int c[a][b],d[a][b],e[a][b];
for(int i=0;i<a;i++){
  for(int j=0;j<b;j++){
  printf("enter the element at index  %d %d: ",i,j);
  int e;
  scanf("%d",&e);
  c[i][j]=e;
  }
  }
  for(int i=0;i<a;i++){
  for(int j=0;j<b;j++){
  printf("enter the element at index  %d %d: ",i,j);
  int e;
  scanf("%d",&e);
  d[i][j]=e;
  }
  }
  for(int i=0;i<a;i++){
  for(int j=0;j<b;j++){
  printf("%d ",c[i][j]+d[i][j]);
  }
  
  printf("\n");
  }
  for(int i=0;i<a;i++){
  for(int j=0;j<b;j++){
  printf("%d ",c[i][j]-d[i][j]);
  }
  printf("\n");
  }
  
  return 0;
  }
  

