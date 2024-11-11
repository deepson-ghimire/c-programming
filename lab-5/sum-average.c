//Write a program to initialize one dimensional array of size 8 and display the sum and average of array elements

#include <stdio.h>

int main() {
    // Initialize the array with 8 elements
    int numbers[8] = {12, 7, 9, 15, 22, 3, 10, 18};
    int sum = 0;
    float average;

    // Calculate the sum of the array elements
    for (int i = 0; i < 8; i++) {
        sum += numbers[i];
    }

    // Calculate the average
    average = (float)sum / 8;

    // Display the results
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
