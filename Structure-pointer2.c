#include <stdio.h>

struct Player {
    char name[20];
    int score;
};

int main() {
    struct Player p1 = {"Alice", 50};
    
    // 1. Declare a pointer to the struct
    struct Player *ptr = &p1;

    // 2. Access members using the arrow (->) operator
    printf("Player: %s\n", ptr->name);
    printf("Score: %d\n", ptr->score);

    // 3. Modify members via pointer
    ptr->score = 100;
    printf("Updated Score: %d\n", p1.score);

    return 0;
}
