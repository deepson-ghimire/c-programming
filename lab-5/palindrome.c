// Write a program to read a string and check for palindrome without using string related function (a string is palindrome if its half is mirror by itself eg: abcdcba).

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, isPalindrome = 1;

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Manually calculate the length of the string
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
