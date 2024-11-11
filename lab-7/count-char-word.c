// Write a program to read a sentence and count the number of characters &words in that sentence.

#include <stdio.h>
#include <ctype.h> // For isalpha function

int main() {
    char sentence[1000];
    int charCount = 0, wordCount = 0, i = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // Read the sentence with spaces

    // Counting characters and words
    while (sentence[i] != '\0') {
        if (isalpha(sentence[i])) {
            charCount++;  // Count characters
        }

        if ((i == 0 || sentence[i-1] == ' ' || sentence[i-1] == '\t') && (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n')) {
            wordCount++;  // Count words
        }

        i++;
    }

    // Output the results
    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);

    return 0;
}
