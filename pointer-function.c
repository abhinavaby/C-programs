// pointers in function call (call by value),(call by reference)
#include <stdio.h>
void square(int n);
void _square(int *n);

int main(){
    int nm=5;
    square(nm);
    printf("value of nm after call by value: %d\n",nm);
    _square(&nm);
    printf("value of nm after call by reference: %d\n",nm);
    return 0;
}

// here copy of the numer is passed to the parameter
void square(int n){
    n=n*n;
    printf("square using call by value: %d\n",n);
}
// here the addres of the variable is given so any chane in the value will be changed in the value as there is no copy taken
void _square(int* n){
    *n = *n * *n;
    printf("square using call by reference: %d\n",*n);
}
