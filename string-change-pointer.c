#include<stdio.h>
#include<string.h>
int main(){
    char* canchange="Abhinav Aby";
   
    puts(canchange);
    canchange="New Name";
    puts(canchange);
    char cannotchange[]="Abhinav Aby";
    puts(cannotchange);
    // cannotchange="New Name"; // this will give error as we cannot change the value
    return 0;
}
