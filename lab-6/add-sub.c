// Write a program to add, subtract, multiply and divide two integers using user defined type function with return type.

#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    int sum, diff, product;
    float quotient;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operations
    sum = add(num1, num2);
    diff = subtract(num1, num2);
    product = multiply(num1, num2);

    // Check for division by zero
    if (num2 != 0) {
        quotient = divide(num1, num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
        quotient = 0.0;  // Set quotient to 0 in case of division by zero
    }

    // Display results
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);
    printf("Multiplication: %d\n", product);
    if (num2 != 0) {
        printf("Division: %.2f\n", quotient);
    }

    return 0;
}

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two integers and return a float
float divide(int a, int b) {
    return (float)a / b;
}
