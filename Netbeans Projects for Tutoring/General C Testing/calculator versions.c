/*
 * Versions of the calculator
 * 
 * ph34R //. 3V!L 133+ 5k!LLz
 * 
 * last mod: 31 Jan 2016 2145 at $home
 * 
 */





#include <string.h>

void version1() {

    char buffer[256];
    char operation[256];

    long number1, number2;

    printf("Calculator version 1.\n");

    while (1) {

        printf("Number1: ");
        gets(buffer);
        number1 = strtol(buffer, NULL, 10);

        printf("operation: ");
        gets(operation);

        printf("Number2: ");
        gets(buffer);
        number2 = strtol(buffer, NULL, 10);

        printf("answer= ");
        if (strcmp(operation, "+") == 0)
            printf("%ld + %ld = %ld\n", number1, number2, number1 + number2);
        else if (strcmp(operation, "-") == 0)
            printf("%ld - %ld = %ld\n", number1, number2, number1 - number2);
        else if (strcmp(operation, "*") == 0)
            printf("%ld * %ld = %ld\n", number1, number2, number1 * number2);
        else if (strcmp(operation, "/") == 0)
            printf("%ld / %ld = %ld\n", number1, number2, number1 / number2);
        else
            printf("unknown operation %s\n", operation);
    }
}

/*
 * Added zero-length input detection
 */

void version2() {

    char buffer[256];
    char operation[256];

    long number1, number2;

    printf("Calculator version 2.\n");

    while (1) {

        printf("Number1: ");
        gets(buffer);
        if (strlen(buffer) == 0) {
            break;
        }

        number1 = strtol(buffer, NULL, 10);

        printf("operation: ");
        gets(operation);
        if (strlen(operation) == 0) {
            break;
        }

        printf("Number2: ");
        gets(buffer);
        if (strlen(buffer) == 0) {
            break;
        }

        number2 = strtol(buffer, NULL, 10);

        printf("answer= ");
        if (strcmp(operation, "+") == 0)
            printf("%ld + %ld = %ld\n", number1, number2, number1 + number2);
        else if (strcmp(operation, "-") == 0)
            printf("%ld - %ld = %ld\n", number1, number2, number1 - number2);
        else if (strcmp(operation, "*") == 0)
            printf("%ld * %ld = %ld\n", number1, number2, number1 * number2);
        else if (strcmp(operation, "/") == 0)
            printf("%ld / %ld = %ld\n", number1, number2, number1 / number2);
        else
            printf("unknown operation %s\n", operation);
    }
}

void version3() {

    char buffer[256];
    char operation[256];

    long number1, number2;

    printf("Calculator version 3.\n");



    while (1) {

        printf("Number1: ");
        gets(buffer);
        if (strlen(buffer) == 0) {
            printf("no number input - quitting\n");
            break;
        }

        number1 = strtol(buffer, NULL, 10);

        printf("operation: ");
        gets(operation);
        if (strlen(operation) == 0) {
            printf("no operation entered - quitting\n");
            break;
        }

        printf("Number2: ");
        gets(buffer);
        if (strlen(buffer) == 0) {
            printf("no number input - quitting\n");
            break;
        }

        number2 = strtol(buffer, NULL, 10);

        /* printf("answer= "); */

        if (strcmp(operation, "+") == 0)
            printf("%ld + %ld = %ld\n", number1, number2, number1 + number2);
        else if (strcmp(operation, "-") == 0)
            printf("%ld - %ld = %ld\n", number1, number2, number1 - number2);
        else if (strcmp(operation, "*") == 0)
            printf("%ld * %ld = %ld\n", number1, number2, number1 * number2);
        else if (strcmp(operation, "/") == 0)
            printf("%ld / %ld = %ld\n", number1, number2, number1 / number2);
        else
            printf("unknown operation %s\n", operation);
    }
}

/*
 * Added a double while loop.  On any error, it goes back to asking for 1st number
 */

void version4() {

    char buffer[256];
    char operation[256];

    long number1, number2;

    printf("Calculator version 4.\n");

    while (1) {

        while (1) {

            printf("Number1: ");
            gets(buffer);
            if (strlen(buffer) == 0) {
                printf("no number input - quitting\n");
                break;
            }

            number1 = strtol(buffer, NULL, 10);

            printf("operation: ");
            gets(operation);
            if (strlen(operation) == 0) {
                printf("no operation entered - quitting\n");
                break;
            }

            printf("Number2: ");
            gets(buffer);
            if (strlen(buffer) == 0) {
                printf("no number input - quitting\n");
                break;
            }

            number2 = strtol(buffer, NULL, 10);

            /* printf("answer= "); */

            if (strcmp(operation, "+") == 0)
                printf("%ld + %ld = %ld\n", number1, number2, number1 + number2);
            else if (strcmp(operation, "-") == 0)
                printf("%ld - %ld = %ld\n", number1, number2, number1 - number2);
            else if (strcmp(operation, "*") == 0)
                printf("%ld * %ld = %ld\n", number1, number2, number1 * number2);
            else if (strcmp(operation, "/") == 0)
                printf("%ld / %ld = %ld\n", number1, number2, number1 / number2);
            else
                printf("unknown operation %s\n", operation);
        }
    }

}

/*
 * Added division-by-zero catcher
 * removed message when no number1 is entered, fails silently
 */

void version5() {

    char buffer[256];
    char operation[256];

    long number1, number2;

    printf("Calculator version 5.\n");

    while (1) {

        while (1) {

            printf("Number1: ");
            gets(buffer);
            if (strlen(buffer) == 0) {
                /* printf("no number input - quitting\n"); */
                break;
            }

            number1 = strtol(buffer, NULL, 10);

            printf("operation: ");
            gets(operation);
            if (strlen(operation) == 0) {
                printf("no operation entered - quitting\n");
                break;
            }

            printf("Number2: ");
            gets(buffer);
            if (strlen(buffer) == 0) {
                printf("no number input - quitting\n");
                break;
            }

            number2 = strtol(buffer, NULL, 10);

            /* printf("answer= "); */

            if (strcmp(operation, "+") == 0)
                printf("%ld + %ld = %ld\n", number1, number2, number1 + number2);
            else if (strcmp(operation, "-") == 0)
                printf("%ld - %ld = %ld\n", number1, number2, number1 - number2);
            else if (strcmp(operation, "*") == 0)
                printf("%ld * %ld = %ld\n", number1, number2, number1 * number2);
            else if (strcmp(operation, "/") == 0) {
                if (number2 == 0) {
                    printf("Caught division by zero error\n");
                } else
                    printf("%ld / %ld = %ld\n", number1, number2, number1 / number2);
            } else
                printf("unknown operation %s\n", operation);
        }
    }
}

/* added modulo op */
    
void version6() {

    char buffer[256];
    char operation[256];

    long number1, number2;

    printf("Calculator version 6.\n");

    while (1) {

        while (1) {

            printf("Number1: ");
            gets(buffer);
            if (strlen(buffer) == 0) {
                /* printf("no number input - quitting\n"); */
                break;
            }

            number1 = strtol(buffer, NULL, 10);

            printf("operation: ");
            gets(operation);
            if (strlen(operation) == 0) {
                printf("no operation entered - quitting\n");
                break;
            }

            printf("Number2: ");
            gets(buffer);
            if (strlen(buffer) == 0) {
                printf("no number input - quitting\n");
                break;
            }

            number2 = strtol(buffer, NULL, 10);

            /* printf("answer= "); */

            if (strcmp(operation, "+") == 0)
                printf("%ld + %ld = %ld\n", number1, number2, number1 + number2);
            else if (strcmp(operation, "-") == 0)
                printf("%ld - %ld = %ld\n", number1, number2, number1 - number2);
            else if (strcmp(operation, "*") == 0)
                printf("%ld * %ld = %ld\n", number1, number2, number1 * number2);
            else if (strcmp(operation, "/") == 0) {
                if (number2 == 0) {
                    printf("Caught division by zero error\n");
                } else
                    printf("%ld / %ld = %ld\n", number1, number2, number1 / number2);
            }
                else if (strcmp(operation, "%") == 0)
                printf("%ld %% %ld = %ld\n", number1, number2, (number1 % number2));

            else 
                printf("unknown operation %s\n", operation);
        }
    }


}