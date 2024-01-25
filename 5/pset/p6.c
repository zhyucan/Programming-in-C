#include <stdio.h>

// 932 -> nine three two

int main(void)
{
    int n, q, mi, each;
    int inter = 0;

    printf("n = ");
    scanf("%i", &n);

    if (n == 0)
    {
        printf("zero\n");
        return 0;
    }

    // 10243 / 10000 = 1 -> 1
    // 10243 / 1000 = 10 -> 10 - 1 * 10 = 0
    // 10243 / 100 = 102 -> 102 - 10 * 10 = 2
    // 10243 / 10 = 1024 -> 1024 - 102 * 10 = 4
    // 10243 / 1 = 10243 -> 10243 - 1024 * 10 = 3
    for (int i = 1; i < n; i *= 10)
    {
        mi = i;        
    }
    
    // mi = 10000
    for (;mi != 0; mi /= 10)
    {
        q = n / mi;
        each = q - inter * 10;

        switch (each)
        {
            case 0:
                printf("zero ");
                break;

            case 1:
                printf("one ");
                break;
                
            case 2:
                printf("two ");
                break;

            case 3:
                printf("three ");
                break;

            case 4:
                printf("four ");
                break;

            case 5:
                printf("five ");
                break;

            case 6:
                printf("six ");
                break;

            case 7:
                printf("seven ");
                break;

            case 8:
                printf("eight ");
                break;

            case 9:
                printf("nine ");
                break;
            
            default:
                break;
        }

        inter = q;
    }

    printf("\n");
}
