/* 
 * File:   main.c
 * Author: mark
 *
 * Created on 15 November 2016, 20:37
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void od(unsigned char * buffer, int length) {

    int i, c;

    for (i = 0; i < length; i++) {
        c = buffer[i];
        // c = c & 255;
        printf("%02x ", c);
    }

    printf("  |  ");

    for (i = 0; i < length; i++) {
        c = buffer[i];
        if (!isprint(c))
            c = '.';
        /* if (c < 32)
            c = 32;
        if (c > 127)
            c = 32; */
        printf("%c", c);
    }

}

unsigned char * safeString(unsigned char * string) {
    
    static unsigned char buffer[512];

    int l = strlen(string);
    /*
    if (l == 0) {
        printf("safeString INFO zero length string passed\n");
        return (NULL);
    }

    if (l > 80) {
        printf("safeString INFO >80 length string passed\n");
        return (NULL);
    } */
    
    int i;
    for (i = 0; i < l; i++) {
        if (isprint(string[i]))
            buffer[i] = string[i];
        else
            buffer[i] = '.';
    }
    buffer[l+1] = 0;
    return (buffer);
}

/*
 * 
 */
int main(int argc, char** argv) {

    int mask = 255;
    int seed = 42;
    unsigned char message[512] = "Hello, world";
    unsigned char newMessage[512];
    int r, i;
    char c;
    int length = strlen(message);
    printf("Message %s is %d chars long\n", message, length);


    // encrypt with the chosen seed
    srand(seed);

    for (i = 0; i < length; i++) {
        r = random();
        c =  message[i] ^ r;
        // ensure that we store something thats printable
        c = ( c & 255);
        newMessage[i] = c;
    }
    newMessage[length] = 0;


    // demonstrate a brute-force attack

    unsigned char buffer[512];
    
    for (seed = 0; seed < 255; seed++) {
        srand(seed);
        for (i = 0; i < length; i++) {
            buffer[i] = (newMessage[i] ^ random());
            //buffer[i] &= mask;
        }
        buffer[length] = 0;
        
        printf("Using seed: %d decrypted message: %s\n", seed, safeString(buffer));
        //printf("Seed: %d ", seed);
        //od(buffer, length);
        //printf("\n");
    }

    return (EXIT_SUCCESS);
}

