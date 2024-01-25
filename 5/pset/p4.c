#include <stdio.h>

int main(void)
{
    float n, memo;
    char op;

    printf("Begin Calculations\n");

    while (1)
    {
        scanf("%f %c", &n, &op);

        if (op == 'E')
        {
            printf("= %f\n", memo);
            printf("End of Calculations.\n");
            break;
        }

        switch (op)
        {
            case 'S':
                memo = n;
                printf("= %f\n", memo);
                break;
            
            case '+':
                memo += n;
                printf("= %f\n", memo);
                break;

            case '-':
                memo -= n;
                printf("%f\n", memo);
                break;

            case '*':
                memo *= n;
                printf("= %f\n", memo);
                break;
            
            case '/':
                if (n != 0)
                {
                    memo /= n;
                    printf("= %f\n", memo);
                }
                else
                {
                    printf("no 0 divide.\n");
                }
                break;
            
            default:
                printf("op error.\n");
                break;
        }
    }
}
