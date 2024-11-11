// Write a program to compute the sum of diagonal elements of a square matrix.
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input elements of the square matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // For the primary diagonal
    }

    // Display the result
    printf("The sum of the diagonal elements is: %d\n", sum);

    return 0;
}
