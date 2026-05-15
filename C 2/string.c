#include<stdio.h>
#include<string.h>
int main(){
    char a[100]="abhinav";
    printf("hello %s",a);
    
    char b[100];
    printf("\n");
    printf("entr your name: ");
    fgets(b,sizeof(b),stdin);
    b[strcspn(b, "\n")] = '\0';
    printf("hello %s\n",b);
    printf("hi");
    printf("length of yor name: %zu\n", strlen(b));
    for(int i=0;i<strlen(b);i++){
        printf("%c\n",b[i]);

    }
    if(strlen(a)!=strlen(b)){
        printf("\nthey are not same");

    }
    else{
        int count=0;
        for(int i=0;i<strlen(b);i++){
        if(a[i]==b[i]){
            count++;
        }

        }
        if(count==strlen(a)){
            printf("\nthey are same");
        }
    

    }
    if(strcmp(a,b)==0){
        printf("\n they are same \n");

    }
    else{
        printf("\nthey are not same");

    }
    char c[100];
    char d[100];
    printf("enter the word: ");
    fgets(c,sizeof(c),stdin);
    c[strcspn(c, "\n")] = '\0';
    strcpy(d,c);
    printf("%s %s",c,d);
    

    return 0;
    

}