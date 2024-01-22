#include <stdio.h>

int main(void)
{
    int n, tri;
    tri = 0;

    for (n = 1; n <= 200; n++)
    {
        tri += n;
    }
    
    // printf("The 200th tri number is %i\n", tri);
    // The 200th tri number is 20100
    printf("%2i    %i\n", n, tri);

    return 0;
}
