// Program to reverse the digits of a number

#include <stdio.h>

int main(void)
{
    int number, right_digit;
    _Bool isPositive = 1;

    printf ("Enter your number.\n");
    scanf ("%i", &number);

    if (number < 0)
    {
        isPositive = 0;
        number = -number;
    }
    
    do
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while (number != 0);

    if (!isPositive)
    {
        printf("-");
    }
    
    printf ("\n");
}
