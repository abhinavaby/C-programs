#include<stdio.h>
#include<string.h>
int main(){
    char input[100];
    printf("enter a string: ");
    scanf("%s",input);
    int index1;
    int index2;
    printf("enter the start index for slicing: ");
    scanf("%d",&index1);
    printf("enter the end index for slicing: ");
    scanf("%d",&index2);
    char sliced[100];
    int j=0;
    for(int i=index1,j=0; i<index2,j<index2-index1; i++,j++){
        sliced[j]=input[i];
    }
    sliced[j]='\0';
    printf("sliced string: %s",sliced);
    return 0;

}
