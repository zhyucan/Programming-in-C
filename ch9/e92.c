#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int nNumber(struct date dd) {
    if (dd.month <= 2) {
        return 1461 * (dd.year - 1) / 4 + 153 * (dd.month + 13) / 5 + dd.day;
    } else {
        return 1461 * dd.year / 4 + 153 * (dd.month + 1) / 5 + dd.day;
    }
}

int main(void) {
    int nNumber(struct date dd);
    struct date d1 = {2004, 8, 8}, d2 = {2005, 2, 22};

    printf("2004:8:8 ~ 2005:2:22 = %i\n", nNumber(d2) - nNumber(d1));

    return 0;
}
