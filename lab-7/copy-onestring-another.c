// Write a program to copy one string to another string with and without using string handling function

#include <stdio.h>
#include <string.h>

// Function to copy string without using string handling functions
void copyWithoutStrcpy(char *source, char *destination) {
    int i = 0;
    while (source[i] != '\0') {  // Copy each character
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';       // Null-terminate the destination string
}

// Function to copy string using strcpy
void copyWithStrcpy(char *source, char *destination) {
    strcpy(destination, source);  // Using strcpy from <string.h>
}

int main() {
    char source[100], destination1[100], destination2[100];

    // Get the input string
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Remove newline character from fgets if exists
    size_t length = strlen(source);
    if (source[length - 1] == '\n') {
        source[length - 1] = '\0';
    }

    // Copy using custom function without string handling functions
    copyWithoutStrcpy(source, destination1);
    printf("Copied without strcpy: %s\n", destination1);

    // Copy using strcpy function
    copyWithStrcpy(source, destination2);
    printf("Copied with strcpy: %s\n", destination2);

    return 0;
}
