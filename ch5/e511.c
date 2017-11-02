#include <stdio.h>

int main(void) {
    int number, result = 0;

    printf("give an integer? ");
    scanf("%i", &number);


    while (number != 0) {
        result += number % 10;
        number /= 10;
    }

    printf("the sum of the digits of this integer  %i\n", result);

    return 0;
}
