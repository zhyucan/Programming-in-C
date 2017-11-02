#include <stdio.h>

int main(void) {
    int value1, value2;

    printf("give two integer: \n");
    scanf("%i %i", &value1, &value2);

    if (value1 % value2 == 0) {
        printf("能整除\n");
    } else {
        printf("不能整除\n");
    }

    return 0;
}
