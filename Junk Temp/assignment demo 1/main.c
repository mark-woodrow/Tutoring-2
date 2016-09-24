/* 
 * File:   main.c
 * Author: mark
 *
 * Created on 18 December 2015, 19:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void aFunction(void) {
    
}


int main(int argc, char** argv) {

    
    int i, j;
    i = 0;
    j = 99;
    
    printf ("before, i=%d, j=%d\n",i,j);
    printf("i=j has value %d\n", (i=j));
    if (i = j)
        printf("same\n");
    else
        printf("not the same\n");
    printf ("afterwards: i=%d, j=%d\n",i,j);    
    
   
    
    return (EXIT_SUCCESS);
    
}

