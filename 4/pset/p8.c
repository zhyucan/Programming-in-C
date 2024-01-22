#include <stdio.h>

int main (void)
{
    int n, number, tri, counter, calcul;

    printf("number of tri numbers to be calculated? ");
    scanf("%i", &calcul);

    for (counter = 1; counter <= calcul; ++counter) 
    {
        printf("What tri number do you want? ");
        scanf("%i", &number);
        tri = 0;

        for (n = 1; n <= number; ++n)
        {
            tri += n;
        }
        
        printf("Tri number %i is %i\n\n", number, tri);
    }

    return 0;
}
