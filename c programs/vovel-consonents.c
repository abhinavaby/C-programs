#include<stdio.h>
#include<string.h>
int main() {        
    char word[100];
    int vowelCount=0;
    int consonantCount=0;
    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0'; // Remove newline character
    for(int i=0;word[i]!='\0';i++){
        if (strchr("aeiouAEIOU", word[i])) {
            vowelCount++;
        }
        else{
            consonantCount++;
        }
    }
    printf("Vowels: %d\n", vowelCount);
    printf("Consonants: %d\n", consonantCount);
}
