#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int prime[50];
    int index = 2;
    bool isPrime;

    prime[0] = 2;
    prime[1] = 3;

    for (int i = 5; i <= 50; i += 2)
    {
        isPrime = true;

        for (int j = 0; prime[j] > 0; j++)        
        {
            if (i % prime[j] == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            prime[index] = i;
            index++;
        }
    }

    for (int i = 0; prime[i] > 0; i++)
    {
        printf("%2i\n", prime[i]);
    }
    
}
