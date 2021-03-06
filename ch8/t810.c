//  Function to find the minimum value in an array

#include <stdio.h>

int minimum(int values[], int numberOfElements) {
    int minValude, i;

    minValude = values[0];

    for (i = 1; i < numberOfElements; i++) {
        if (values[i] < minValude) {
            minValude = values[i];
        }
    }

    return minValude;
}

int main(void) {
    int array1[5] = {157, -28, -37, 26, 10};
    int array2[7] = {12, 45, 1, 10, 5, 3, 22};
    int minimum(int values[], int numberOfElements);

    printf("array1 minimum: %i\n", minimum(array1, 5));
    printf("array2 minimum: %i\n", minimum(array2, 7));

    return 0;
}
