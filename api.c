#include <stdio.h>

// add & remove
double subtract(int a, int b) {
    return a - b;
}

// rename
void printGreeting() {
    printf("Hello, World!\n");
}

// change signature
double getValue() {  // Changed return type to double
    return 42.0;
}

void printSum(int a, int b, int c) {  // Added a parameter
    printf("Sum: %d\n", a + b + c);
}

void multiply(int a, int b) {  // Changed parameter names
    printf("Product: %d\n", a * b);
}

void displayValue(const int* ptr) {  // Added const qualifier
    printf("Value: %d\n", *ptr);
}

// extract function
// Function to create a greeting message
void createGreeting(const char* name, char* message, size_t size) {
    snprintf(message, size, "Hello, %s! Welcome!", name);
}

// Function to print a greeting message
void printMessage(const char* message) {
    printf("%s\n", message);
}

// Function to process and print a greeting message
void createAndPrintGreeting(const char* name) {
    char message[50];
    createGreeting(name, message, sizeof(message));  // Call the method to create greeting
    printGreeting(message);                           // Call the method to print greeting
}

// inline function
void performAreaCalculation(double radius) {
    double area = 3.14159 * radius * radius;
    printf("Area: %.2f\n", area);
}

int main() {

}