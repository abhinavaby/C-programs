#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("enter the string: ");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a, "\n")] = '\0';
    int i=0,alp=0,dig=0,sp=0;
    while(a[i]!='\0'){
        if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z'){
            alp++;

        }
        else if(a[i]>='0' && a[i]<='9'){
            dig++;
        }
        else{
            sp++;
        }
        i++;

    }
    printf("number of alphabets:%d\nnumber of digits:%d\nnumber of special charecters:%d",alp,dig,sp);
    return 0;



}
