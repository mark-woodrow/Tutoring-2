

/*
 * returns base raised to a power
 * if power < 0, returns -1 to indicate an error
 * 0 ^ 0 is defined as being 1
 */

long powerl(long base, long power) {

    if ((base == 0) && (power == 0))
        return 1;
    /* 0 raised to anything is zero */
    if (base == 0)
        return 0;
    /* n ^ 0 is just 1 */
    if (power == 0)
        return 1;
    /* n ^ 1 is just n */
    if (power == 1)
        return base;
    /* we can't handle negative powers */
    if (power < 0)
        return -1;

    long answer = base;
    while (--power > 0)
        answer = answer * base;
    return answer;
}



/*
 * Test powerl() function
 */
void test(long base, long exponent, long answer) {

    long result;
    printf("checking that powerl(%ld,%ld) == %ld ", base, exponent, answer);

    result = powerl(base, exponent);
    if (result == answer)
        printf("pass\n");
    else
        printf("FAIL, expected %ld, got %ld\n", answer, result);
}
