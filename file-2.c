#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("data.txt","w");
    if(fp==NULL){
        printf("error no file found");
        return 1;

    }
    fprintf(fp,"helllo world");
    fclose(fp);
    return 0;
    fp=fopen("data.txt","r");
    if(fp==NULL){
        printf("error no file found");
        return 1;   }
    else{
        char ch;
        while ((ch=fgetc(fp))!=EOF){
            printf("%c",ch);
        }

        return 0;

    }
    fclose(fp);
}
