#include <stdio.h>

// rename
void displayMessage(const char *message) {
    printf("%s\n", message);
}

// delete
// void addNumbers(int a, int b) {
//     printf("Sum: %d\n", a + b);
// }

// change signature
void sumAndDisplay(int number1, int number2) {
    printf("Total: %d\n", number1 + number2);
}

// add method
void addPrint() {
    printf("This a new method\n");
}

int main() {

    sumAndDisplay(5, 10);
    addPrint();
    return 0;
}