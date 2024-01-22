#include <stdio.h>

int main(void)
{
    int n, fac;

    printf("  n             fac\n");

    for (n = 1; n <= 10; n++)
    {
        fac = 1;

        for (int i = 1; i <= n; i++)
        {
            fac *= i;
        }

        printf("%3i        %8i\n", n, fac);
    }
    
    return 0;
}
