#include <stdio.h>

int main(void) {
    unsigned int i;
    unsigned long int factorial(unsigned int n);

    for (i = 0; i < 11; i++) {
        printf("%2u! = %lu\n", i, factorial(i));
    }

    return 0;
}

//  Recursive function to calculate the factorial of a positive integer
unsigned long int factorial(unsigned int n) {
    unsigned long int result;

    if (n == 0) {
        result = 1;
    } else {
        result = n * factorial(n - 1);
    }

    return result;
}
