#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    char c;
    int i=0;
    while(c!='\n'){
        scanf("%c",&c);
        string[i]=c;
        i++;

    }
    string[i]='\0';
    printf("The string is: %s",string);
    puts(string);
    return 0;   
}
