// Write a recursive function to generate Fibonacci series.

#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)  // Base case 1
        return 0;
    else if (n == 1)  // Base case 2
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int terms;
    
    // Input the number of terms
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci series up to %d terms:\n", terms);
    
    // Generate and display the Fibonacci series
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    return 0;
}
