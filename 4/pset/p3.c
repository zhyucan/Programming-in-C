#include <stdio.h>

int main(void)
{
    int i;

    for (i = 5; i <= 55; i += 5)
    {
        printf("%4i\n", i * (i + 1) / 2);
    }
    
    return 0;
}
