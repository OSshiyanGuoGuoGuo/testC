#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

void mi() {
    // add & remove
    printf("%.2f\n", subtract(100.0, 100.0));
    // InvocationArgumentsChange
    printf("%.2f\n", divide(100.0, 100.0));
}

void cf() {
    int temp = 5;
    // add & remove
    for (int i = 1; i < temp; i++)
        printf("i=%d", i);
    // add branch
    if (temp < 6) {
        printf("Today is weekday");
    }
    else
        printf("Today is weekend");
    // remove branch
    if (temp == 0)
        printf("temp=0");
    else
        printf("temp is unknown");
    // ControlConditionChange
    if (temp % 2 != 0)
        printf("temp is odd number");
    // StatementBranchChange
    int temp1 = 10;
    if (temp1 < 10) {
        printf("temp1 < 10");
    }
    else {
        printf("temp1 >= 10");
        printf("\n");
    }

    printf("Remove this seq statement");

}

void df() {
    // add/remove
    char str = 'b';
    //
    float b = 99.8;
}

int main() {
    mi();

}


float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}