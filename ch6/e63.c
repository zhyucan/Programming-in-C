#include <stdio.h>

int main(void) {
    int value1, value2;
    float result;

    printf("give two integer: \n");
    scanf("%i %i", &value1, &value2);

    result = (float) value1 / value2;
    if (value2 != 0) {
        printf("%i 除以 %i 等于 %.3f\n", value1, value2, result);
    } else {
        printf("除数不能为 0\n");
    }

    return 0;
}
