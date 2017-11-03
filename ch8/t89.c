//  Function to find the minimum value in an array

#include <stdio.h>

int minimum(int values[10]) {
    int minValude, i;

    minValude = values[0];

    for (i = 1; i < 10; i++) {
        if (values[i] < minValude) {
            minValude = values[i];
        }
    }

    return minValude;
}

int main(void) {
    int scores[10], i, minScore;
    int minimum(int values[10]);

    printf("Enter 10 scores\n");

    for (i = 0; i < 10; i++) {
        scanf("%i", &scores[i]);
    }

    minScore = minimum(scores);
    printf("\nMinimum socre is %i\n", minScore);

    return 0;
}
