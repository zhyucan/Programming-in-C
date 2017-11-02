#include <stdio.h>

int main(void) {
    for (int i = 1; i < 11; i++) {
        printf("square %2i       %i\n", i, i * i);
    }

    return 0;
}
