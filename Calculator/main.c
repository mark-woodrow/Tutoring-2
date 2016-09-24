/* 
 * File:   main.c
 * Author: mark.woodrow
 *
 * Created on 11 February 2016, 08:27
 */

#include <stdio.h>
#include <stdlib.h>





/*
 * Run the tests on powerl()
 */
void testPowerl() {
    
    printf("Testing powerl:\n");
    test(0,0,1);
    test(1,0,1);
    test(0,1,0);
    test(1,1,1);
    test(2,10,1024);
    test(-1,2,1);
    test(3,-2,-1);  /* powerl returns -1 for negative exponents */
    
    for (int i=10; i > 0; i--) {
        printf("2^%d = %ld\n", i, powerl(2,i));
    }
    
    
}
int main(int argc, char** argv) {

    version9();
    return (EXIT_SUCCESS);
}

