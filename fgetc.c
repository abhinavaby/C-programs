#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("w.txt","r");
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
   
    fclose(fptr);

    fptr=fopen("w.txt","a");
    fputc('-',fptr);
    fputc('b',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('a',fptr);
    fputc('a',fptr);

    fclose(fptr);
    



}