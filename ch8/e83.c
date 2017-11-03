#include <stdio.h>

float absoluteValue(float x) {
    if (x < 0) {
        x = -x;
    }

    return x;
}

float squareRoot(float x, const float epsilon) {
    float guess = 1.0;
    float absoluteValue(float x);

    if (x >= 0) {
        while (absoluteValue(guess * guess - x) >= epsilon) {
            guess = (x / guess + guess) / 2.0;
        }
    } else {
        printf("Negative argument to squareRoot.\n");
        return -1.0;
    }

    return guess;
}

int main(void) {
    float absoluteValue(float x);
    float squareRoot(float x, const float epsilon);

    printf("squareRoot(2.0, 0.01) = %f\n", squareRoot(2.0, 0.1));
    printf("squareRoot(2.0, 0.0001) = %f\n", squareRoot(2.0, 0.0001));
    printf("squareRoot(2.0, 0.0000001) = %f\n", squareRoot(2.0, 0.0001));

    return 0;
}
