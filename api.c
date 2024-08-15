#include <stdio.h>

void printMessage(const char *message) {
    printf("%s\n", message);
}

void addNumbers(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int main() {
    addNumbers(5, 10);
    return 0;
}