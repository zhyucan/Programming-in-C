// Program to generate a table of triangular numbers

#include <stdio.h>

int main(void)
{
    int n = 1, triangularNumber;

    triangularNumber = 0;

    while(n <= 10) {
        triangularNumber += n;
        printf("%2i          %i\n", n, triangularNumber);
        n++;
    }

    return 0;
}
