// Write a program to find biggest among three numbers using pointer.

#include <stdio.h>

void findLargest(int *a, int *b, int *c, int *largest) {
    if (*a > *b && *a > *c) {
        *largest = *a;
    } else if (*b > *c) {
        *largest = *b;
    } else {
        *largest = *c;
    }
}

int main() {
    int num1, num2, num3, largest;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Call the function to find the largest number
    findLargest(&num1, &num2, &num3, &largest);

    // Display the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
