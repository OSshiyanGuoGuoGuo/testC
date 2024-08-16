#include <stdio.h>

// add & remove
double subtract(int a, int b) {
    return a - b;
}

// rename
void printHello() {
    printf("Hello, World!\n");
    printf("This is a method that test rename!\n");
}

// change signature
double getValue() {  // Changed return type to double
    return 42.0;
}

void printSum(int a, int b, int c) {  // Added a parameter
    printf("Sum: %d\n", a + b + c);
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
    printMessage(message);                           // Call the method to print greeting
}

// inline function
void performAreaCalculation(double radius) {
    double area = 3.14159 * radius * radius;
    printf("Area: %.2f\n", area);
}

int main() {

}