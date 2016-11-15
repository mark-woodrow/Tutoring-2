/* 
 * File:   main.c
 * Author: mark
 *
 * Created on 08 November 2016, 19:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 100

int landscape[SIZE][SIZE];

int Table[][10] = {
    { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20},
    { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30},
    { 4, 8, 12, 16, 20, 24, 28, 32, 36, 40},
    { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50},
    { 6, 12, 18, 24, 30, 36, 42, 48, 54, 60},
    { 7, 14, 21, 28, 35, 42, 49, 56, 63, 70},
    { 8, 16, 24, 32, 40, 48, 56, 64, 72, 80},
    { 9, 18, 27, 36, 45, 54, 63, 72, 81, 90},
    { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100}
};

long double powerld(long base, long power) {

    if ((base == 0) && (power == 0))
        return 1;
    /* 0 raised to anything is zero */
    if (base == 0)
        return 0;
    /* n ^ 0 is just 1 */
    if (power == 0)
        return 1;
    /* n ^ 1 is just n */
    if (power == 1)
        return base;
    /* we can't handle negative powers */
    if (power < 0)
        return -1;

    long double answer = base;
    while (--power > 0)
        answer = answer * base;
    return answer;
}

double powerl(long base, long power) {

    if ((base == 0) && (power == 0))
        return 1;
    /* 0 raised to anything is zero */
    if (base == 0)
        return 0;
    /* n ^ 0 is just 1 */
    if (power == 0)
        return 1;
    /* n ^ 1 is just n */
    if (power == 1)
        return base;
    /* we can't handle negative powers */
    if (power < 0)
        return -1;

    double answer = base;
    while (--power > 0)
        answer = answer * base;
    return answer;
}

void chessboardExample() {

    int square;
    int num = 4;
    double chessboard[num];

    chessboard[0] = 1;

    for (square = 1; square < num; square++) {
        chessboard[square] = chessboard[square - 1] * 2;
    }


    long double sum = 0.0;
    for (square = 0; square < num; square++) {
        printf("square %d has %20.0f coins on\n", square, chessboard[square]);
        sum += chessboard[square];
    }
    printf("sum is %.0Lf coins\n", sum);

    printf("Computed sum is %.0Lf\n", powerld(2, 64) - 1);

    printf("Computed sum is %.0lf\n", powerl(2, 64) - 1);

}






void timesTable() {

    int table[10][10];
    int row, column;

    for (row = 0; row < 10; row++) {
        for (column = 0; column < 10; column++) {
            table[row][column] = (row + 1) * (column + 1);
        }
    }

    for (row = 0; row < 10; row++) {
        for (column = 0; column < 10; column++) {
            printf("%3d, ", table[row][column]);
        }
        printf("\n");
    }
}

/**
 * Fill the landscape array with zeroes
 */
void initLandscape() {

    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            landscape[i][j] = 0;
        }
    }
}

/**
 * Display the landscape array
 */
void displayLandscape() {

    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%6d", landscape[i][j]);
        }
        printf("\n");
    }
}

void chopSea() {

    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (landscape[i][j] < 0)
                landscape[i][j] = 0;
        }
    }

}

/**
 * Randomly return either +1 or -1, with equal probability
 * 
 */
int getDelta() {
    int r = random() % 100;
    if (r < 50) {
        return -1;
    } else
        return 1;

}

void doFaulting() {

    // pick a random row
    int row = random() % SIZE;
    // pick a random direction, up or down
    int delta = getDelta();
    int i, j;


    // raise/lower the land below this row
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            // land before the chosen row goes one way
            if (i < row)
                landscape[i][j] += delta;
            else
                // land after, goes the opposite way
                landscape[i][j] -= delta;
        }
    }


    // Now do a column
    delta = getDelta();
    int column = random() % SIZE;
    // raise/lower the land below this column
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            // land before the chosen row goes one way
            if (j < column)
                landscape[i][j] += delta;
            else
                // land after, goes the opposite way
                landscape[i][j] -= delta;
        }
    }

}

/*
 * 
 */
int main(int argc, char** argv) {

    /*
    int l;
    // seed the random number generator
    srand(time(NULL));
    initLandscape();
    //displayLandscape();

    for (l = 0; l < 1000; l++)
        doFaulting();

    chopSea();
    printf("\n\n");
    displayLandscape();
     */
    // timesTable();
    chessboardExample();
    return (EXIT_SUCCESS);
}

