// Define a function named fact() to calculate factorial of a number n and then write a program that uses this function fact() to calculate combination and permutation.

#include <stdio.h>

// Function to calculate factorial of a number
long long fact(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    else
        return n * fact(n - 1);  // Recursive case
}

// Function to calculate combination C(n, r)
long long combination(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

// Function to calculate permutation P(n, r)
long long permutation(int n, int r) {
    return fact(n) / fact(n - r);
}

int main() {
    int n, r;
    long long comb, perm;

    // Input values of n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Ensure n >= r to avoid incorrect calculation
    if (n < r) {
        printf("Error: n should be greater than or equal to r.\n");
        return 1;
    }

    // Calculate combination and permutation
    comb = combination(n, r);
    perm = permutation(n, r);

    // Display results
    printf("Combination C(%d, %d) = %lld\n", n, r, comb);
    printf("Permutation P(%d, %d) = %lld\n", n, r, perm);

    return 0;
}
