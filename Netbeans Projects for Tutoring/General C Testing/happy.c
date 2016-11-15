#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

long computeHappiness(long number) {

    char buffer[80];
    sprintf(buffer, "%ld", number);
    int length = strlen(buffer);

    char thisDigit;
    int sum = 0;
    int temp, i;

    for (i = 0; i < length; i++) {
        thisDigit = buffer[i];
        temp = (int) (thisDigit - '0');
        temp = temp * temp;
        sum += temp;
    }
    return (long) sum;
}

void isHappyShowSequence(long number) {


    printf("%ld:: ", number);
    long v, oldv;

    v = 0;
    oldv = number;
    int i = 0;
    while (i++ < 50) {
        v = computeHappiness(oldv);
        printf("%ld, ", v);
        if ((oldv == 4) && (v == 16))
            break;
        oldv = v;
        if (v == 1)
            break;
    }

    if (v == 1) {
        printf(": happy\n");
        return true;
    } else {
        printf(": not happy\n");
        return false;
    }
}

bool isHappy(long number) {

    long v, oldv;

    oldv = number;
    int i = 0;
    while ((++i < 50) && (v != 1)) {
        v = computeHappiness(oldv);
        if ((oldv == 4) && (v == 16))
            break;
        oldv = v;
    }

    if (v == 1) {
        return true;
    } else {
        return false;
    }
}

void testHappy() {
    long i;
    for (i = 1; i < LONG_MAX; i++) {
        if (isHappy(i)) {
            printf("%ld, ", i);
        }
    }
}