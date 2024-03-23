#include <stdio.h>

int main(void)
{
    int a, b, mid;
    
    a = 0;
    b = 1;
    printf("%i\n%i\n", a, b);
    
    for (int i = 2; i < 15; i++)
    {
        mid = a;
        a = b;
        b = mid + b;

        printf("%i\n", b);
    }
}
