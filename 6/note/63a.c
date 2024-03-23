#include <stdio.h>

int main(void)
{
    int fib[15], i;
    
    fib[0] = 0;
    fib[1] = 1;
    
    for (i = 2; i < 15; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (i = 0; i < 15; i++)
    {
        printf("%i\n", fib[i]);
    }
}
