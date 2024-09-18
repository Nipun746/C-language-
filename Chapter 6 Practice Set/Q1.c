// Write a program to print the address of a variable. Use this address to get the value of the variable.
#include <stdio.h>

int main() {
    int num = 42;        // Define a variable
    int *ptr = &num;     // Pointer to hold the address of the variable

    // Print the address of the variable
    printf("Address of num: %p\n", (void *)ptr);

    // Access the value using the pointer
    printf("Value of num: %d\n", *ptr);

    return 0;
}
