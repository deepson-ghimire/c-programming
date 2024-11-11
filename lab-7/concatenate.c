// Write a program to concatenate two strings.

#include <stdio.h>
#include <string.h>

// Function to concatenate strings without using strcat
void concatenateWithoutStrcat(char *str1, char *str2, char *result) {
    int i = 0, j = 0;

    // Copy the first string into result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append the second string to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the result string
    result[i] = '\0';
}

// Function to concatenate strings using strcat
void concatenateWithStrcat(char *str1, char *str2, char *result) {
    strcpy(result, str1);    // Copy first string into result
    strcat(result, str2);    // Concatenate second string to result
}

int main() {
    char str1[100], str2[100], result1[200], result2[200];

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

    // Concatenate without using strcat
    concatenateWithoutStrcat(str1, str2, result1);
    printf("Concatenated without strcat: %s\n", result1);

    // Concatenate using strcat
    concatenateWithStrcat(str1, str2, result2);
    printf("Concatenated with strcat: %s\n", result2);

    return 0;
}
