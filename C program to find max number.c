#include <stdio.h>

// write a program to print the maximum number between two numbers using user-defined functions
int find_maximum(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}  //user defined functions

int main() {

    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Here i Called the user-defined function to find the maximum number
    int maximum_number = find_maximum(num1, num2);

    // Code to print My Result
    printf("The maximum number between %d and %d is: %d\n", num1, num2, maximum_number);

    return 0;
}
