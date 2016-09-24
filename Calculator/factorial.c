

/*
 * return the factorial of n
 */
long factorial (long n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n > 1)
        return n * (factorial(n-1));
}


void testFactorial() {
    for (int i=10; i>=0; i--)
        printf("%d! = %ld\n", i, factorial(i));
    
}

