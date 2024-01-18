#include <stdio.h>

int main(void)
{
    int F = 27;
    float C;

    C = (F - 32) / 1.8;

    printf("C = %g when F = %i\n", C, F);
}
