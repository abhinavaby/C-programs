#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","w");
    if(fptr==NULL){
        printf("no file exists");
    }

    fclose(fptr);
    return 0;

}