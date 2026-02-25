#include<stdio.h>
#include<string.h>

int main() {
    char word[100];
    char reversed[100]="";
    int length=0;
    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0'; // Remove newline character
    for(int i=0;word[i]!='\0';i++){
        length=length+1;
    };
    for(int i=length-1;i>=0;i--){
        reversed[length-1-i]=word[i];
    }
    printf("reversed string is: %s",reversed);
}