#include <stdio.h>
#include <string.h>

#define NUM_STRINGS 5
#define MAX_LENGTH 100

// Function to sort strings using Bubble Sort
void sortStrings(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap pointers if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *arr[NUM_STRINGS];
    char buffer[MAX_LENGTH];

    // Get 5 words from the user
    printf("Enter %d words:\n", NUM_STRINGS);
    for (int i = 0; i < NUM_STRINGS; i++) {
        printf("Word %d: ", i + 1);
        fgets(buffer, MAX_LENGTH, stdin);
        
        // Remove newline character from fgets if it exists
        size_t len = strlen(buffer);
        if (buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }

        // Allocate memory for each word and copy from buffer
        arr[i] = malloc(len * sizeof(char));
        strcpy(arr[i], buffer);
    }

    // Sort the array of strings
    sortStrings(arr, NUM_STRINGS);

    // Print the sorted strings
    printf("\nSorted words:\n");
    for (int i = 0; i < NUM_STRINGS; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);  // Free each allocated string after use
    }

    return 0;
}
