#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("h.txt","w");
    char a='w';
    int w=10;
    char b[100]="\nhi this is abhinav aby";
    char c[100]="hi how are you";
    char d[100]="yo you are old";
    fputc(a,fp);
    fputs(b,fp);
    fputc('\n',fp);
    for(int i=0;c[i]!='\0';i++){
        fputc(c[i],fp);
    }
    fprintf(fp,"\n");
    fprintf(fp,"%s %d",d,w);
    fclose(fp);



}