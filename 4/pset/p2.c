#include <stdio.h>

int main(void)
{
    printf("  n    n^2\n");

    for (int i = 1; i < 11; i++)
    {
        printf("%3i    %3i\n", i, i*i);
    }
    
    return 0;
}
