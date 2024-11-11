// Write a program to compare two strings.

#include <stdio.h>
#include <string.h>

// Function to compare strings without using strcmp
int compareWithoutStrcmp(char *str1, char *str2) {
    int i = 0;

    // Compare each character of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];  // Return the ASCII difference if characters are different
        }
        i++;
    }

    // If both strings end at the same time, they're equal; otherwise, one is longer
    return str1[i] - str2[i];
}

// Function to compare strings using strcmp
int compareWithStrcmp(char *str1, char *str2) {
    return strcmp(str1, str2);  // Using strcmp from <string.h>
}

int main() {
    char str1[100], str2[100];

    // Get the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character if it exists
    size_t len1 = strlen(str1);
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    // Get the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if it exists
    size_t len2 = strlen(str2);
    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    // Compare without using strcmp
    int result1 = compareWithoutStrcmp(str1, str2);
    if (result1 == 0) {
        printf("Strings are equal (without strcmp)\n");
    } else if (result1 < 0) {
        printf("String 1 is less than String 2 (without strcmp)\n");
    } else {
        printf("String 1 is greater than String 2 (without strcmp)\n");
    }

    // Compare using strcmp
    int result2 = compareWithStrcmp(str1, str2);
    if (result2 == 0) {
        printf("Strings are equal (with strcmp)\n");
    } else if (result2 < 0) {
        printf("String 1 is less than String 2 (with strcmp)\n");
    } else {
        printf("String 1 is greater than String 2 (with strcmp)\n");
    }

    return 0;
}
