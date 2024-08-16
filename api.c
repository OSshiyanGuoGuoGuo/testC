#include <stdio.h>

// add & remove
int add(int a, int b) {
    return a + b;
}

// rename
void displayHello() {
    printf("Hello, World!\n");
    printf("This is a method that test rename!\n");
}

// change signature
int getValue() {
    return 42;
}

void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

void displayValue(int* ptr) {
    printf("Value: %d\n", *ptr);
}

// extract function
// Function to process and print a greeting message
void createAndPrintGreeting(const char* name) {
    char message[50];
    // Create the greeting message
    snprintf(message, sizeof(message), "Hello, %s! Welcome!", name);
    // Print the greeting message
    printf("%s\n", message);
}









// inline function
double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}

void performAreaCalculation(double radius) {
    double area = calculateArea(radius);  // 调用普通函数
    printf("Area: %.2f\n", area);
}


int main() {

}