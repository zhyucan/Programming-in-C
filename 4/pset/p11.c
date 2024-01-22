#include <stdio.h>

int main(void)
{
    int n, s = 0;
    
    printf("n? ");
    scanf("%i", &n);

    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }

    printf("s = %i\n", s);

    return 0;
}
