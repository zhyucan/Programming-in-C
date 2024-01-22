#include <stdio.h>

int main(void)
{
    // 1234/10=123 1234%10=4
    int n;

    printf("reverse of ? ");
    scanf("%i", &n);

    while (n > 0)
    {
        printf("%i", n % 10);
        n /= 10;
    }
    
    printf("\n");

    return 0;
}
