#include <stdio.h>

int main(void) {
    int numbers[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, j;

    for (j = 0; j < 10; j++) {
        for (i = 0; i < j; i++) {
            numbers[j] += numbers[i];
            printf("%i ", numbers[j]);
        }
        printf("\n");
    }

    for (j = 0; j < 10; j++) {
        printf("%i ", numbers[i]);
    }

    printf("\n");

    return 0;
}
