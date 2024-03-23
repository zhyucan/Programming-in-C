#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int prime[50];
    int i, j, item;
    bool isPrime;

    prime[0] = 2;
    prime[1] = 3;

    for (i = 2; i < 50; i++)
    {
        prime[i] = 0;
    }
    
    for (i = 4; i < 50; i++)
    {
        isPrime = 1;

        for (j = 0; j < 50; j++)
        {
            item = prime[j];

            if (item == 0)
            {
                if (isPrime)
                {
                    prime[j] = i;
                }
                break;
            }

            if (i % item == 0)
            {
                isPrime = 0;
                break;
            };
        }
    }
    
    for (i = 0; i < 50; i++)
    {
        printf("%2i\n", prime[i]);
    }
}
