#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("charecter = %c\n",ch);
    

    fscanf(fptr,"%c",&ch);
    printf("charecter = %c\n",ch);


    fscanf(fptr,"%c",&ch);
    printf("charecter = %c\n",ch);


    fscanf(fptr,"%c",&ch);
    printf("charecter = %c\n",ch);


    fscanf(fptr,"%c",&ch);
    printf("charecter = %c\n",ch);


    fscanf(fptr,"%c",&ch);
    printf("charecter = %c\n",ch);

    fclose(fptr);
    

}