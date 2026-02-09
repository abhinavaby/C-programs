#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int length=0;
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    for(int i=0;name[i]!='\0';i++){
        if(name[i]!='\n'){
            length++;
        }
        
    }
    printf("length=%d",length-1);
}
    
