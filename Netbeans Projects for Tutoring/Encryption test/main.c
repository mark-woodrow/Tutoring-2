/*
 * File:   main.c
 * Author: mark
 *
 * Created on 15 November 2016, 20:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>


/**
 * safely print a string that may contain garbage
 */

void safeprintstring(char * buff) {

    int length = strlen(buff);
    // try and sanitise length
    if (length < 0)
        length = 1;
    if (length > 40)
        length = 40;

    int i = 0;
    int c;
    while (i < length) {
        c = buff[i];
        //c = c && 255;
        if ((c > 65) && (c < 255))
            printf("%c", c);
        else
            printf("=");
        i++;
    }

}

/*
 *
 */
int main(int argc, char** argv) {


    // use a mask of 2^n  -1
    int mask = 255;
    int seed = 42;
    char message[] = "Hello, world";
    // a buffer to put the encoded message into
    char newMessage[512];

    // initialise with our seed value
    srand(seed);

    int i;
    int length = strlen(message);

    // scan the message, xor each character with the next random number
    for (i = 0; i < length; i++) {
        newMessage[i] = message[i] ^ (random() % mask);
    }
    // put in a terminating NULL
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
    for (seed = 0; seed < mask; seed++) {
        srand(seed);
        for (i = 0; i < length; i++) {
            buffer[i] = newMessage[i] ^ (random() % mask);
        }
        buffer[length] = 0;
        printf("Using seed: %d gives message:   ", seed);
        safeprintstring(buffer);
        //printf("%s", buffer);
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

