#include<stdio.h>
#include<string.h>
int main(){
    char password[50];
    char salt[]="123";
    fgets(password, 50, stdin);
    password[strcspn(password, "\n")] = 0; // remove newline character if present
    puts(password);
    strcat(password, salt);
    puts(password);
    return 0;
}
