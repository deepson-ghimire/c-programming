// Write a program to calculate sum of first 50 natural numbers using recursive function.

#include <stdio.h>

// Recursive function to calculate sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 1)  // Base case
        return 1;
    else
        return n + sumOfNaturalNumbers(n - 1);  // Recursive call
}

int main() {
    int n = 50;
    int sum = sumOfNaturalNumbers(n);

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
