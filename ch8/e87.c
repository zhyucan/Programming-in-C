#include <stdio.h>

long int x_to_the_n(int x, int n) {
    int i, product = 1;

    for (i = 0; i < n; i++) {
        product *= x;
    }

    return product;
}

int main(void) {
    long int x_to_the_n(int x, int n);

    printf("2 的 10 次方：%li\n", x_to_the_n(2, 10));

    return 0;
}
