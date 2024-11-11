// Write a program to find smallest number from the array using function.

#include <stdio.h>

// Function to find the smallest number in an array
int findSmallest(int arr[], int size) {
    int min = arr[0]; // Assume first element is the smallest

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }
    return min;
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

    // Find and display the smallest element
    int smallest = findSmallest(arr, size);
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
