
/* 
 * Here we have a way to see if non-recognised characters were entered.
 * We test the address of the first un-recognised character against
 * the end of the string.  If the two are the same, all characters were
 * recognised, and the input was wholly a valid number.
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void testInputString() {
    
    char buffer[128];
    long value;
    int length, anomaly;
    char * cptr;
    
    printf("Number> ");
    gets(buffer);
    
    length = strlen(buffer);
    if (length == 0) {
        /* they just pressed 'return' */
        printf("nothing entered!\n");
    }
    
    value = strtol(buffer, &cptr, 10);
    anomaly = (int)(cptr-buffer);
    printf("Value= %ld \n", value);
    printf("ptr diff = %d\n", anomaly);
    if (anomaly == length)
        ; /* printf("no unrecognised characters found"); */
    else
        printf("unrecognised characters found");
    
    printf("\n\n");
    return;
    
    
}
