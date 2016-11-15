/* 
 * File:   main.c
 * Author: mark
 *
 * Created on 13 January 2016, 06:42
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static volatile char password[20] = "123456";
static volatile char inputBuffer[10];
static volatile int pin = 1234;

char encodeROT13(char input) {

    char tmp = input + 13;
    if (tmp > 'Z')
        tmp = tmp - 'A';
    return (tmp);
}

void bufferOverflowDemo() {

    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if (strcmp(buff, "thegeekstuff")) {
        printf("\n Wrong Password \n");
    } else {
        printf("\n Correct Password \n");
        pass = 1;
    }

    if (pass) {
        /* Now Give root or admin rights to user*/
        printf("\n Root privileges given to the user \n");
    }

    return;

}

void getsDemo() {



    printf("Before:\n");
    printf("%s %d\n", password, pin);
    printf("enter something: ");

    gets(inputBuffer);

    printf("\nAfter:\n");
    printf("%s %d\n", password, pin);


}

void strcpyDemo() {

    char string[80];       /* an empty string */
    char source[] = "Hello world!";
    
    printf("before: %s, %s\n", source, string);
    strcpy(string, source);
    printf(" after: %s, %s\n", source, string);

}

void strcatDemo() {
    
    printf("\nStrcat Demo :-\n");
    /* an empty string of 80 characters */
    char string[80];
    
    /* copy a word into string */
    strcpy(string, "these ");
    
    /* concatenate words onto it */
    strcat(string, "strings ");
    strcat(string, "are ");
    strcat(string, "concatenated.");
    
    /* print it */
    printf("%s\n", string);
}


void strtolDemo() {
    
    char input[] = "-123456789";
    int base = 0;
    long result;
    
    result = strtol(input, NULL, base);
    
    printf("%s converts to %ld\n", input, result);
}



/*
 * Computes base ^ exponent
 * 
 * Does not work for exponents < 0.
 * 0 ^ 0 is defined as being 1
 */
long powerl(long base, long exponent) {
    
    /* deal with 0^0, we define it as 1 */
    if ((base == 0) && (exponent == 0))
        return 1;
    /* zero raised to anything is 0 */
    if (base == 0)
        return 0;
    /* anything raised to 0 is 1 */
    if (exponent == 0)
        return 1;
    
    if (exponent < 0)
        return -1;
    

    
    long ans = base;
    while (--exponent > 0)
        ans = ans * base;
    return ans;
    
}

/*
 * 
 */

int main(int argc, char** argv) {

    char * astring = "Hello World";

    /*
    int i;
    int j;
    char c = 'a';
    i = (int)c;
    i++;
    c++;
    printf("%c", c);

    char myString[] = "Hello World!";
    for (j = 0; j < strlen(myString); j++) {
        printf("%c", encodeROT13(myString[j]));
        
    }
    
     getsDemo();
     */
    /*   bufferOverflowDemo(); */

    /* printf("%d\n", strcmp("bream", "break")); */

    /* strcpyDemo();
    strcatDemo(); */

    /* strtolDemo(); */
    
    
    /* ANSI sequences test */

    /*
    printf("Hello\n");
    printf("%c[1A", 27);
    printf("World\n");
    */

    /* version6(); */
      
    /* testInputString(); */
    
    
            
   /*  printf ("the string is %s", astring);
    printf ("the address of the string is %lx", (unsigned long)astring); */
    
    /*printf ("test \n");
            
    long a = 2;
    long b;
    for (b = 10; b >= 0; b--) {
        printf("powerl(%ld, %ld) = %ld\n", a,b, powerl(a,b));
        }
     * 
     */
    testHappy();
    return (EXIT_SUCCESS);
}

