// Write a program that illustrates use of local, global and static variables.

#include <stdio.h>

int globalVar = 0; // Global variable

void demonstrateVariables() {
    int localVar = 0; // Local variable, reinitialized every time the function is called
    static int staticVar = 0; // Static variable, retains its value between function calls

    // Increment variables
    globalVar++;
    localVar++;
    staticVar++;

    // Display values of variables
    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n", localVar);
    printf("Static variable: %d\n", staticVar);
}

int main() {
    printf("Function call 1:\n");
    demonstrateVariables();

    printf("\nFunction call 2:\n");
    demonstrateVariables();

    printf("\nFunction call 3:\n");
    demonstrateVariables();

    return 0;
}
