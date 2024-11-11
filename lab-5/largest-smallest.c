// Write a program to display largest and smallest element of an array defined in Q.No. 1.
#include <stdio.h>

int main() {
    float numbers[10];
    float largest, smallest;
    
    // Input 10 floating-point numbers
    printf("Enter 10 floating-point numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    
    // Initialize largest and smallest with the first element of the array
    largest = smallest = numbers[0];
    
    // Find the largest and smallest elements in the array
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    
    // Display the results
    printf("\nLargest element: %.2f\n", largest);
    printf("Smallest element: %.2f\n", smallest);
    
    return 0;
}
