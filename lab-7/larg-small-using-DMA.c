// Write a program to find the largest and smallest number in a list of N number using DMA

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int N, i;
    int largest, smallest;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Allocate memory for N integers
    numbers = (int *)malloc(N * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit if memory allocation fails
    }

    // Input the numbers
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize largest and smallest with the first element
    largest = smallest = numbers[0];

    // Find the largest and smallest number
    for (i = 1; i < N; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Output the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    // Free the allocated memory
    free(numbers);

    return 0;
}
