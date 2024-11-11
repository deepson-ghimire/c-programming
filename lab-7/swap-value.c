// Write a program to swap value of two variables using pointer.

#include <stdio.h>

// Function to swap values of two variables using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a; // Store the value of a in temp
    *a = *b;   // Assign the value of b to a
    *b = temp; // Assign the value of temp (old a) to b
}

int main() {
    int x, y;

    // Input values of x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Display values before swapping
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(&x, &y);

    // Display values after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
