/*
 Solution to Seb's homework, 27th Jan 2016
 */

#include <stdbool.h>
#include <stdio.h>
#include <errno.h>

void specimenSolution() {
    
    char inputBuffer[1024];
    long result;
    
    while(true) {
        
        /* print a prompt */
        printf("Number> ");
        
        /* get some input */
        gets(inputBuffer);
        
        /* is the input buffer empty?  If so, exit */
        if (strlen(inputBuffer) == 0) {
            printf("Exiting...\n");
            break;
        }

        /* turn it into a long value, base 10 */
        errno = 0;
        result = strtol(inputBuffer, NULL, 10);
        
        /* check to see if it is out of range */
        if (errno == ERANGE) {
                printf("%s is Out Of Range\n", inputBuffer);
        }
        else {
        /* print the number */
        printf("%s -> %ld\n", inputBuffer, result);
        }
    }
    
}