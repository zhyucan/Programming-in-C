#include <stdio.h>

int main(void)
{
    int base, index = 0;
    long int num;
    int res[64];
    const char af[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
        'A', 'B', 'C', 'D', 'E', 'F'};
    
    printf("Number to be converted? ");
    scanf("%ld", &num);
    printf("Base? ");
    scanf("%i", &base);

    for (;num >= base; num = num / base)
    {
        res[index] = num % base;
        index++;
    }
 
    res[index] = num;

    printf("Converted number = ");

    for (; index >= 0; index--)
    {
        printf("%c", af[res[index]]);
    }
    
    printf("\n");
}
