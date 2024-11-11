/*
UN
    UNIV
    UNIVER
    UNIVERSI
    UNIVERSITY
    UNIVERSI
    UNIVER
    UNIV
    UN
    */

#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "UNIVERSITY";
    int length = strlen(word);

    // Incremental build-up
    for (int i = 1; i <= length; i++) {
        printf("%.*s\n", i, word); // Print the first 'i' characters of the word
    }

    // Decremental reduction
    for (int i = length - 1; i > 0; i--) {
        printf("%.*s\n", i, word); // Print the first 'i' characters of the word
    }

    return 0;
}
