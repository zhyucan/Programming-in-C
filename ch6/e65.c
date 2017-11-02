// Program to reverse the digits of a number

#include <stdio.h>

int main(void) {
    int number, right_digit;

    printf("Enter your number.\n");
    scanf("%i", &number);

    if (number > 0) {
        while (number != 0) {
            right_digit = number % 10;
            printf("%i", right_digit);
            number = number / 10;
        }
    } else if (number < 0) {
        number = -number;
        while (number != 0) {
            right_digit = number % 10;
            printf("%i", right_digit);
            number = number / 10;
        }
        printf("-");
    } else {
        printf("0");
    }

    printf("\n");

    return 0;
}
