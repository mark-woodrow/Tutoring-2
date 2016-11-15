/* 
 * File:   main.c
 * Author: mark
 *
 * Created on 24 September 2016, 12:25
 */

#include <stdio.h>
#include <stdlib.h>
//#include <errno.h>


#define E_OK    0
#define ERROR    1



void showSizes() {
    
    printf("Type sizes\n");
    
    printf("char %d byte\n", sizeof(char));
    printf("int %d byte\n", sizeof(int));    
    printf("long %d byte\n", sizeof(long));
    printf("float %d byte\n", sizeof(float));
    printf("double %d byte\n", sizeof(double));    
    printf("long double %d byte\n", sizeof(long double));        
    
}
/*
 * 
 */
int main(int argc, char** argv) {

    enum Colours {Red=10, Green, Blue };
    
    enum Colours aColour = Red;
    printf("%d", aColour);
    
    char * test = "Hello, World!\n";
    //char[] myString = "foo";
    //char bar[] = "bar";
    
    printf ("string is %s\n", test);
    printf ("address of string is %lx\n", (long)test);    
    
    /*
    int i = 1;
    while (i < 10) {
        printf("Number %d\n", i);
        i++;
    }
    
    int j=1;
    do {
        printf("Number %d\n", j);
        j++;
    
    } while (j < 10);
    
    */
       
    showSizes();
    
    errno = EINVAL;
    perror("Error:");
    
    return (EXIT_SUCCESS);
}

