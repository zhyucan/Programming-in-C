#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("two ints? \n");
    scanf("%i %i", &n1, &n2);

    if (n1 % n2 == 0)
    {
        printf("yes.\n");
    }
    else
    {
        printf("no.\n");
    }
}
