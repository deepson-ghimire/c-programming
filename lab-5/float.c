// Write a program to enter 10 floating numbers in an array and display it.

#include <stdio.h>

int main() {
    float numbers[10];
    
    // Input 10 floating-point numbers
    printf("Enter 10 floating-point numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    
    // Display the entered numbers
    printf("\nThe entered numbers are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", numbers[i]);
    }
    
    return 0;
}
