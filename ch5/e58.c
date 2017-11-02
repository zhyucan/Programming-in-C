#include <stdio.h>

int main(void) {
    int all, n, number, triangularNumber, counter;

    printf("all triangular? ");
    scanf("%i", &all);
    for(counter = 1; counter <= all; counter++) {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for (n = 2; n <= number; n++) {
            triangularNumber += n;
        }

        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}
