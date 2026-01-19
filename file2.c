#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("number.txt","r");
    for(int i=0;i<4;i++){
        printf("%c",fgetc(fptr));

    }
    
}