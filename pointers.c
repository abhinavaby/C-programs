#include <stdio.h>
int main() {
   int age=22;
   int *ptr=&age;
   int age2=*ptr;

    printf("Age is %d\n",age2);
    printf("addres of age= %p\n",&age);
    printf("value stored in ptr=%p\n",ptr);
    printf("adress of ptr=%p\n",&ptr);
    printf("value of the addres stored in ptr=%d\n",*ptr);
    printf("value of variable at addres stored at age=%d",*(&age));
    



   return 0;
} 
