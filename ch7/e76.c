//  Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main(void) {
    int f1 = 0, f2 = 1, f, i;

    printf("%i %i", f1, f2);

    for (i = 2; i < 15; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        printf(" %i", f);
    }

    printf("\n");

    return 0;
}
