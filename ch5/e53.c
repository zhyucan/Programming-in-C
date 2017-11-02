#include <stdio.h>

int main(void) {
    int triangularNumber;

    for (int i = 5; i <= 50; i+=5) {
        printf("triangularNumber %2i        %i\n", i, i * (i + 1) / 2);
    }

    return 0;
}
