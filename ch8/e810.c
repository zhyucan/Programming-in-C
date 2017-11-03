#include <stdio.h>

int prime(int n) {
    int i, index = 0;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            index++;
        }
    }

    if (index == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int prime(int n);

    printf("%i 是 质数吗？%i\n", 13, prime(13));
    printf("%i 是 质数吗？%i\n", 14, prime(14));
    printf("%i 是 质数吗？%i\n", 17, prime(17));

    return 0;
}
