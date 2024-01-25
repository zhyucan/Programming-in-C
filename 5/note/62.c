#include <stdio.h>

int main(void)
{
    int gradeNumber, grade;
    float average;
    int failNumber = 0, gradeSum = 0;

    printf("How many grades will you be entering? ");
    scanf("%i", &gradeNumber);

    for (int i = 1; i <= gradeNumber; i++)
    {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);

        gradeSum += grade;

        if (grade < 65)
        {
            ++failNumber;
        }
    }

    average = (float) gradeSum / gradeNumber;
    printf("\nGrade average = %.2f\n", average);
    printf("Number of failures = %i\n", failNumber);

    return 0;
}
