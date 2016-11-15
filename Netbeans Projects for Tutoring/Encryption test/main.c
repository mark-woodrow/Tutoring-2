/* 
 * File:   main.c
 * Author: mark
 *
 * Created on 15 November 2016, 20:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {


    int mask = 128;
    int seed = 42;
    char message[] = "Hello, world";
    char newMessage[512];

    srand(seed);

    int i;
    int length = strlen(message);

    for (i = 0; i < length; i++) {
        newMessage[i] = message[i] ^ (random() % mask);
    }
    newMessage[length] = 0;

    printf("Old message: %s\n", message);
    printf("New message: %s\n", newMessage);

    /*
    srand(seed);
    for (i = 0; i < length; i++) {
        newMessage[i] = newMessage[i] ^ (random() % mask);
    }
    newMessage[length] = 0;
    printf("New message: %s\n", newMessage);
     */

    // demonstrate a brute-force attack

    char buffer[512];
    for (seed = 0; seed < 255; seed++) {
        srand(seed);
        for (i = 0; i < length; i++) {
            buffer[i] = newMessage[i] ^ (random() % mask);
        }
        buffer[length] = 0;
        printf("Seed: %d message: %s\n", seed, buffer);
    }


    return (EXIT_SUCCESS);
}

