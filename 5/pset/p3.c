#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("two ints? \n");
    scanf("%i %i", &n1, &n2);

    if (n2 != 0)
    {
        printf("%.3f\n", (float) n1 / n2);
    }
    else
    {
        printf("no 0\n");
    }
}
