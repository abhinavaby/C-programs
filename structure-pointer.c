#include <stdio.h>

// 1. Move the struct definition BEFORE the function prototype
struct data {
    char name[100];
    int age;
};

// 2. Change 'struct data d' to 'struct data d[]' to accept an array
void datadisplay(struct data d[], int n);

int main() {
    int n;
    printf("enter the limit: ");
    // 3. Fixed typo: 'sanf' changed to 'scanf'
    scanf("%d", &n);
    
    struct data s[n];
    for(int i = 0; i < n; i++) {
        printf("enter the name: ");
        scanf("%s", s[i].name);
        printf("enter the age: ");
        scanf("%d", &s[i].age);
    }
    
    datadisplay(s, n);
    return 0;
}

// 4. Update definition to match the array parameter
void datadisplay(struct data d[], int n) {
    for(int i = 0; i < n; i++) {
        printf("name: %s\n", d[i].name);
        printf("age: %d\n", d[i].age);
    }
}
