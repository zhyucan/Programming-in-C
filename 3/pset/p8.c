#include <stdio.h>

int main(void)
{
    int i, j, Next_multiple;

    i = 256;
    j= 7;
    printf("%i\n", i + j - i % j);

    i = 365;
    j = 7;
    printf("%i\n", i + j - i % j);

    i = 12258;
    j = 23;
    printf("%i\n", i + j - i % j);

    i = 996;
    j = 4;
    printf("%i\n", Next_multiple);

    return 0;
}
