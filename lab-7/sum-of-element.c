// Write a program to find the sum of all the elements of an array using pointers.

#include <stdio.h>

int sumOfArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Add each element using pointer arithmetic
    }
    return sum;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of array elements
    int sum = sumOfArray(arr, size);

    // Display the sum
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
