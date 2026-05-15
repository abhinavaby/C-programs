#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    fp=fopen("h.txt","r");
    int vovel=0;
    int con=0;
    char a;


    while ((a = fgetc(fp)) != EOF) {
        
       
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            vovel+=1;

        }
        else{
            con+=1;
        }
        printf("%c",a);
    }
    printf("\n");
    printf("number of vovels=%d no of consonents=%d",vovel,con);
    fclose(fp);
}