// Write a C program to calculate sum of the natural number up to N number using recursive function.

#include <stdio.h>

// Recursive function to calculate sum of natural numbers up to n
int sumOfNaturalNumbers(int n) {
    if (n == 1)  // Base case
        return 1;
    else
        return n + sumOfNaturalNumbers(n - 1);  // Recursive call
}

int main() {
    int n;
    
    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if input is valid
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // Calculate sum and display result
    int sum = sumOfNaturalNumbers(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
