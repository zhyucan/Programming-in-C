#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool isPrime;

    for (int i = 2; i < 50; i++)
    {
        isPrime = true;

        if (i > 2 && i % 2 == 0)
        {
            continue;
        }
        
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime)
        {
            printf("%i ", i);
        }
    }

    printf("\n");
}
