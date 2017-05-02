
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * 
 */

struct item {
    int data;
    struct item * item_ptr;
};


// simple structures
// declared like this

struct playerStats {
    char playerName[128];
    int strength;
    int dexterity;
    int wisdom;
    int charisma;
    int xp;
    double gold;
    int hp;
    bool isPoisoned;
    bool isCursed;
    bool isBlessed;
};

void demoStructures() {
    
    // declared like this
    struct playerStats firstPlayer;
    struct playerStats secondPlayer;

    // and values assigned like this

    firstPlayer.strength = 17;
    firstPlayer.dexterity = 10;
    firstPlayer.wisdom = 10;
    firstPlayer.charisma = 10;
    firstPlayer.xp = 0;
    firstPlayer.gold = 0.1;
    firstPlayer.hp = 100;
    firstPlayer.isPoisoned = false;
    firstPlayer.isCursed = false;
    firstPlayer.isBlessed = false;

    // can we initialise like this? -- no
    // firstPlayer.playerName = "Mark";

    // we have to copy it in
    strcpy(firstPlayer.playerName, "Mark");

    // write a function to print out the contents of the playerStats struct.
    // what is this ?
    void printStats(struct playerStats);
    
    printStats(firstPlayer);
    // Ans: a forward declaration, telling the compiler what the functions signature is.
    //Q: what is a signature, in this context?
    //A: name, return type, no. of args and their types

    // see the function, for a question.
    
    // As per D&D, assign random player stats to player 2.
    // using 3 D6 rolls
    secondPlayer.strength = rand() % 6 + rand() % 6 + rand() % 6;
    // what is wrong with the above code?
    // ans: it assigns values in range 0 .. 15, not 3 .. 18
    // modify it so it is correct
    
    // write the printStats function so it takes a pointer to a structure
    // what are 2 advantages of doing this?
    // what could be 1 disadvantage?
    // Ans: slight speed advantage in not copying the struct, a function with a pointer
    // can modify the data, and this can be a disadv!
    
    




    // now, write a function that takes a pointer to a structure
    void assignRandomStats(struct playerStats *);

    // the syntax for accessing structure elements through a pointer is
    // slightly different, it uses -> 

    struct playerStats * sptr;

    sptr = &firstPlayer;

    // sptr is a pointer to a structure, so *sptr IS a structure
    // so we could do this :-
    (*sptr).strength = 16;
    // the brackets force the dereferencing to happen first, then the structure access, .
    // it looks a bit odd, so this is also used:-
    sptr->strength = 16;
    
    // Lists

    // With a structure, we could return several values from a function!
    // if we wanted to.  Not sure its good practice.  More usual to return a pointer to one?
    
    // Linked lists
    struct item * headptr = NULL;
    struct item first, second, third, last;
    
    first.data = 2;
    second.data = 7;
    third.data = 1;
    last.data = 8;
    
    headptr = &first;
    first.item_ptr = &second;
    second.item_ptr = &third;
    third.item_ptr = &last;
    last.item_ptr = NULL;
    
    // now to traverse the list
    
    
    struct item * traverse_ptr = &first;
    
    while (traverse_ptr != NULL) {
        printf("data item is %d\n", traverse_ptr->data);
        traverse_ptr = traverse_ptr->item_ptr;      
    }
     
    return (EXIT_SUCCESS);
}


void printStats(struct playerStats aPlayer) {
    
    printf("  strength = %d\n", aPlayer.strength);
    printf(" dexterity = %d\n", aPlayer.dexterity);
    printf("    wisdom = %d\n", aPlayer.wisdom);
    printf("  charisma = %d\n", aPlayer.charisma);
    printf("experience = %d\n", aPlayer.xp);
    printf("      gold = %3.2lf\n", aPlayer.gold);
            
/*    playerStats.hp = 100;
    playerStats.isPoisoned = false;
    playerStats.isCursed = false;
    playerStats.isBlessed = false; */
 
    
    // can this function change any of these values?  Why/ why not?
}