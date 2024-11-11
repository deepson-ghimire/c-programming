#include <stdio.h>
#include <string.h>

void modifySentence(char *sentence) {
    int i, j = 0;
    char modifiedSentence[1000]; // Array to store the modified sentence
    
    for (i = 0; sentence[i] != '\0'; i++) {
        // Check for space, skip it if present
        if (sentence[i] != ' ') {
            // Replace '.' with ':'
            if (sentence[i] == '.') {
                modifiedSentence[j++] = ':';
            } else {
                modifiedSentence[j++] = sentence[i];
            }
        }
    }
    modifiedSentence[j] = '\0'; // Null-terminate the modified sentence
    
    // Copy the modified sentence back to the original
    strcpy(sentence, modifiedSentence);
}

int main() {
    char sentence[1000];
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    modifySentence(sentence);
    
    printf("Modified sentence: %s\n", sentence);
    
    return 0;
}
