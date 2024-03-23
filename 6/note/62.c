#include <stdio.h>

int main(void)
{
    int rl[11], i, response;

    for (i = 0; i < 11; i++)
    {
        rl[i] = 0;
    }
    
    printf("your rating? \n");

    for (i = 0; i < 20; i++)
    {
        scanf("%i", &response);

        rl[response]++;
    }
    
    for (i = 0; i < 11; i++)
    {
        printf("%2i%2i\n", i, rl[i]);
    }
}
