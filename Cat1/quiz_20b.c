#include <stdio.h>

int main() {
    char word[100]; // Assuming a maximum word length of 100
    int i;

    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            printf("%c is a vowel.\n", word[i]);
        } else {
            printf("%c is a consonant.\n", word[i]);
        }
    }

    return 0;
}
