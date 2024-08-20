#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

void mi() {
    printf("%.2f\n", add(100.0, 100.0));
    printf("%.2f\n", divide(100.0, 10.0));
}

void cf() {
    int temp = 5;

    if (temp > 1) {
        printf("Remove this con statement");
    }

    if (temp < 6) {
        printf("Today is weekday");
    }

    if (temp == 0)
        printf("temp=0");
    else if (temp == 1)
        printf("temp=1");
    else if (temp == 2)
        printf("temp=2");
    else
        printf("temp is unknown");

    if (temp % 2 == 0)
        printf("temp is odd number");

    int temp1 = 10;
    if (temp1 < 10) {
        printf("temp1 < 10");
        printf("\n");
    }
    else {
        printf("temp1 >= 10");
    }

    printf("Remove this seq statement");

}

void df() {

    int a = 10;

    float b = 99.9;
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