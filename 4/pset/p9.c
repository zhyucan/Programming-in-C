#include <stdio.h>

// 5.2-5.5 for->while

// int main(void)
// {
//     int n = 1, tri = 0;

//     while (n <= 200)
//     {
//         tri += n;
//         n++;
//     }
//     printf("The 200th tri number is %i\n", tri);

//     return 0;
// }


// int main(void)
// {
//     int n = 1, triangularNumber = 0;

//     printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
//     printf (" n Sum from 1 to n\n");
//     printf ("--- ---------------\n");

//     while (n <= 10) 
//     {
//         triangularNumber += n;
//         printf (" %i %i\n", n, triangularNumber);
//         n++;
//     }

//     return 0;
// }


// int main(void)
// {
//     int n = 1, number, triangularNumber;
//     printf ("What triangular number do you want? ");
//     scanf ("%i", &number);
//     triangularNumber = 0;

//     while (n <= number)
//     {
//         triangularNumber += n;
//         n++;
//     }

//     printf ("Triangular number %i is %i\n", number, triangularNumber);

//     return 0;
// }


int main (void)
{
    int n, number, triangularNumber, counter;
    for ( counter = 1; counter <= 5; ++counter ) {
    printf ("What triangular number do you want? ");
    scanf ("%i", &number);

    n = 1;
    triangularNumber = 0;
    while (n <= number)
    {
        triangularNumber += n;
        n++;
    }
    printf ("Triangular number %i is %i\n\n", number,
    triangularNumber);
    }
    return 0;
}
