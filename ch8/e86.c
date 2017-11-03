#include <stdio.h>

double absoluteValue(double x) {
    if (x < 0) {
        x = -x;
    }

    return x;
}

double squareRoot(double x, const double epsilon) {
    double guess = 1.0;
    double absoluteValue(double x);

    if (x >= 0) {
        while (absoluteValue(guess * guess / x - 1) >= epsilon) {
            guess = (x / guess + guess) / 2.0;
            printf("guess = %f\n", guess);
        }
    } else {
        printf("Negative argument to squareRoot.\n");
        return -1.0;
    }

    return guess;
}

int main(void) {
    double absoluteValue(double x);
    double squareRoot(double x, const double epsilon);

    printf("squareRoot(2.0, 0.01) = %f\n", squareRoot(2.0, 0.1));
    printf("squareRoot(2.0, 0.0001) = %f\n", squareRoot(2.0, 0.0001));
    printf("squareRoot(2.0, 0.0000001) = %f\n", squareRoot(2.0, 0.0001));

    return 0;
}
