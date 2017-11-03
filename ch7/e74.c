#include <stdio.h>

int main(void) {
    float sum, single, average[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("give a float number: ");
        scanf("%g", &single);
        average[i] = single;
    }

    for (i = 0; i < 10; i++) {
        sum += average[i];
    }

    printf("数组平均数   %g\n", sum / 10);

    return 0;
}
