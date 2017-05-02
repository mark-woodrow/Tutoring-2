/* 
 * File:   main.c
 * Author: mark
 *
 * Created on 25 April 2017, 06:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */


struct foo { 
    int data;
    struct foo * fooptr;
};

int main(int argc, char** argv) {

    struct foo * headptr = NULL;
    struct foo first, second, third, last;
    
    headptr = &first;
    first.fooptr = &second;
    second.fooptr = &third;
    third.fooptr = &last;
    last.fooptr = NULL;
    
    // run the demo
    demoStructures();
    
    return (EXIT_SUCCESS);
}

