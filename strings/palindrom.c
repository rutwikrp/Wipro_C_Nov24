#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char word[]) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(word[i]) != tolower(word[len - i - 1])) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char sentence[1000];
    char word[100];
    int count = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline character

    // Tokenize the sentence into words
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        strcpy(word, token); // Copy token into word
        // Check if the word is a palindrome
        if (isPalindrome(word)) {
            count++;
        }
        // Move to the next token
        token = strtok(NULL, " ");
    }

    // Print the result
    printf("Number of palindromic words: %d\n", count);

    return 0;
}
