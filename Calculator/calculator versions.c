/*
 * Versions of the calculator
 * 
 * ph34R //. 3V!L 133+ 5k!LLz
 * 
 * last mod: 31 Jan 2016 2145 at $home
 * 
 */

#include <string.h>
#include <math.h>

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
            } else if (strcmp(operation, "%") == 0)
                printf("%ld %% %ld = %ld\n", number1, number2, (number1 % number2));

            else
                printf("unknown operation %s\n", operation);
        }
    }


}

/*
 * Added powerl function.
 * Now supports + - * / % and ^.
 * Has div-by-zero and negative-power traps
 */
void version7() {

    char buffer[256];
    char operation[256];

    long number1, number2;

    printf("Calculator version 7.  Added powerl() \n");

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
            } else if (strcmp(operation, "%") == 0)
                printf("%ld %% %ld = %ld\n", number1, number2, (number1 % number2));
            else if (strcmp(operation, "^") == 0) {
                printf("%ld ^ %ld = ", number1, number2);
                long temp = powerl(number1, number2);
                if (temp == -1)
                    printf("Error\n");
                else
                    printf("%ld\n", temp);
            } else
                printf("unknown operation %s\n", operation);
        }
    }
}

/*
 * Added classifying of operations using enum
 * Now supports + - * / % and ^.
 * Has div-by-zero and negative-power traps
 */

void version8() {

    /* These are the operations that we can do */
    enum Operations {
        ADD, SUBTRACT, MULT, DIVIDE, MODULO, POWER, NONE
    };
    const int numberOfOps = 6;
    /* these are the operation strings */
    char *_opStrings[] = {"+", "-", "*", "/", "%", "^"};
    char opStrings[][6] = {"add", "-", "*", "/", "%", "^"};

    /* these are the corresponding operations */
    enum Operations opsList[] = {ADD, SUBTRACT, MULT, DIVIDE, MODULO, POWER};
    /* these are the number of arguments each operation needs */
    int numargs[] = {2, 2, 2, 2, 2, 2};

    char buffer[256];
    char operation[256];
    long number1, number2;
    /* number of operations that we recognise */
    enum Operations theOperation;

    printf("Calculator version 8.  Added op classify \n");

    while (1) {
        while (1) {
            /* we start out with no operation */
            theOperation = NONE;

            printf("Number1: ");
            gets(buffer);
            if (strlen(buffer) == 0) {
                /* printf("no number input - quitting\n"); */
                break;
            }

            number1 = strtol(buffer, NULL, 10);

            printf("Operation: ");
            gets(operation);
            if (strlen(operation) == 0) {
                printf("no operation entered - quitting\n");
                break;
            }
            /* classify the operation */
            /* search through our array of operations, look for a match */
            for (int i = 0; i < numberOfOps; i++) {
                if (strcmp(operation, opStrings[i]) == 0) {
                    theOperation = opsList[i];
                    break;
                }
            }

            if (theOperation == NONE) {
                printf("That operation isn't known.\n");
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

            switch (theOperation) {
                case ADD:
                    printf("%ld + %ld = %ld\n", number1, number2, number1 + number2);
                    break;
                case SUBTRACT:
                    printf("%ld - %ld = %ld\n", number1, number2, number1 - number2);
                    break;
                case MULT:
                    printf("%ld * %ld = %ld\n", number1, number2, number1 * number2);
                    break;
                case DIVIDE:
                    if (number2 == 0)
                        printf("Caught division by zero error\n");
                    else
                        printf("%ld / %ld = %ld\n", number1, number2, number1 / number2);
                    break;
                case MODULO:
                    printf("%ld %% %ld = %ld\n", number1, number2, (number1 % number2));
                    break;
                case POWER:
                    printf("%ld ^ %ld = ", number1, number2);
                    long temp = powerl(number1, number2);
                    if (temp == -1)
                        printf("Error\n");
                    else
                        printf("%ld\n", temp);
                    break;
                case NONE:
                    printf("operation set to NONE\n");
            }
        }
    }
}

/*
 * Added unary operations
 * Now supports + - * / %  ^ sqr ! sqrt
 * Has div-by-zero and negative-power traps
 */

void version9() {

    /* These are the operations that we can do */
    enum Operations {
        ADD, SUBTRACT, MULT, DIVIDE, MODULO, POWER, FACT, SQR, SQRT, NONE
    };
    const int numberOfOps = 9;
    /* these are the operation strings */
    char *_opStrings[] = {"+", "-", "*", "/", "%", "^", "!", "sqr", "sqrt"};
    char opStrings[][9] = {"+", "-", "*", "/", "%", "^", "!", "sqr", "sqrt"};

    /* these are the corresponding operations */
    enum Operations opsList[] = {ADD, SUBTRACT, MULT, DIVIDE, MODULO, POWER, FACT, SQR, SQRT};
    /* these are the number of arguments each operation needs */
    int numargs[] = {2, 2, 2, 2, 2, 2, 1, 1, 1};

    char buffer[256];
    char operation[256];
    long number1, number2;
    /* number of operations that we recognise */
    enum Operations theOperation;
    int numberOfArgs;

    printf("Calculator version 9.  Added unary ops\n");

    while (1) {
        while (1) {
            /* we start out with no operation */
            theOperation = NONE;

            printf("Number1: ");
            gets(buffer);
            if (strlen(buffer) == 0) {
                /* printf("no number input - quitting\n"); */
                break;
            }

            number1 = strtol(buffer, NULL, 10);

            printf("Operation: ");
            gets(operation);
            if (strlen(operation) == 0) {
                printf("no operation entered - quitting\n");
                break;
            }
            /* classify the operation */
            /* search through our array of operations, look for a match */
            for (int i = 0; i < numberOfOps; i++) {
                if (strcmp(operation, opStrings[i]) == 0) {
                    theOperation = opsList[i];
                    /* save the number of args that this op takes */
                    numberOfArgs = numargs[i];
                    break;
                }
            }

            if (theOperation == NONE) {
                printf("That operation %s isn't known.\n", operation);
                break;
            }

            /* if we need another number, ask for it */
            if (numberOfArgs == 2) {
                printf("Number2: ");
                gets(buffer);
                if (strlen(buffer) == 0) {
                    printf("no number input - quitting\n");
                    break;
                }

                number2 = strtol(buffer, NULL, 10);
            }

            /* printf("answer= "); */

            switch (theOperation) {
                case ADD:
                    printf("%ld + %ld = %ld\n", number1, number2, number1 + number2);
                    break;
                case SUBTRACT:
                    printf("%ld - %ld = %ld\n", number1, number2, number1 - number2);
                    break;
                case MULT:
                    printf("%ld * %ld = %ld\n", number1, number2, number1 * number2);
                    break;
                case DIVIDE:
                    if (number2 == 0)
                        printf("Caught division by zero error\n");
                    else
                        printf("%ld / %ld = %ld\n", number1, number2, number1 / number2);
                    break;
                case MODULO:
                    printf("%ld %% %ld = %ld\n", number1, number2, (number1 % number2));
                    break;
                case POWER:
                    printf("%ld ^ %ld = ", number1, number2);
                    long temp = powerl(number1, number2);
                    if (temp == -1)
                        printf("Error\n");
                    else
                        printf("%ld\n", temp);
                    break;
                case FACT:
                    /* need a < 0 trap */
                    printf("%ld! = %ld\n", number1, factorial(number1));
                    break;
                case SQR:
                    printf("sqr(%ld) = %ld\n", number1, (number1 * number1));
                    break;
                case SQRT:
                    /* need a < 0 trap */
                    printf("sqrt(%ld) = %ld\n", number1, ((long)sqrt(number1)));
                    break;                    
                case NONE:
                    printf("operation set to NONE\n");
            }
        }
    }
}