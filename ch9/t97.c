#include <stdio.h>

int main(void) {
    int i;
    struct month {
        int numberOfDays;
        char name[3];
    };

    const struct month months[4] =
        { { 31, {'J', 'a', 'n'} }, { 28, {'F', 'e', 'b'} },
          { 31, {'M', 'a', 'r'} }, { 30, {'A', 'p', 'r'} } };

    printf("Month Number of Days\n");
    printf("----- --------------\n");

    for (i = 0; i < 4; i++) {
        printf("%c%c%c  %i\n",
            months[i].name[0], months[i].name[1],
            months[i].name[2], months[i].numberOfDays);
    }

    return 0;
}
