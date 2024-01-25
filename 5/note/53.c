#include <stdio.h>

int main(void)
{
     int n;

     printf("Enter your number to be tested: ");
     scanf("%i", &n);

     if (n % 2 == 0)
     {
        printf("The number is even.\n");
     }
     else
     {
        printf("The number is odd.\n");
     }
}
