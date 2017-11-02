#include <stdio.h>

int main(void)
{
    int i, j, result;

    printf("To round off an integer %i and %i = %i\n", 365, 7, 365 + 7 - 365 % 7);
    printf("To round off an integer %i and %i = %i\n", 12258, 23, 12258 + 23 - 12258 % 7);
    printf("To round off an integer %i and %i = %i\n", 996, 4, 996 + 4 - 996 % 4);

    return 0;
}
