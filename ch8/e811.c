#include <stdio.h>

float arraySum(float a[], int n) {
    int i, sum;

    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum;
}

int main(void) {
    float a[4] = {1.4, 45.21, 23, 23.7};
    float arraySum(float a[], int n);

    printf("%f\n", arraySum(a, 4));

    return 0;
}
