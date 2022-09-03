/** limits.c
 * =============================================================
 * Name: Your Name, Date
 * Section:  Your Section
 * Project:  Lab 04
 * Purpose:  Determine the max and min values of ints and longs
 * ============================================================= */

#include <stdio.h>
#include <limits.h>

#define WORLD_POPULATION_2020 7794798739

int main() {

    // Task 1 -----------------------------------------------------------------------

    // Create an integer variable, and assign it the value of the world population
    int intVariable = WORLD_POPULATION_2020;
    // Print out the integer variable you just made
    printf("world population in 2020 was (as int): %d \n", intVariable);
    // Create a long variable, and assign it the value of the world population
    long longVariable = WORLD_POPULATION_2020;
    // Print out the long variable you just made
    printf("world population in 2020 was (as long): %ld \n", longVariable);
    
    // Task 2 -----------------------------------------------------------------------

    // Create an integer variable, and assign it the value of INT_MAX - 1
    int intVariable2 = INT_MAX - 1;
    // Print the value of the variable you just made
    printf("value of int: %d\n", intVariable2);
    // Increment the value of your integer variable, and print it out using the same format as above
    intVariable2 = intVariable2 + 1;
    printf("value of int: %d\n", intVariable2);
    // (2x) Increment the value of your integer variable, and print it out using the same format as above
    intVariable2 = intVariable2 + 1;
    printf("value of int: %d\n", intVariable2);
    // (3x) Increment the value of your integer variable, and print it out using the same format as above
    intVariable2 = intVariable2 + 1;
    printf("value of int: %d\n", intVariable2);
    
    // Task 3 -----------------------------------------------------------------------

    // Create an long variable, and assign it the value of LONG_MAX - 1
    long longVariable2 = LONG_MAX - 1;  
    // Print the value of the variable you just made
    printf("value of long: %ld\n", longVariable2);
    // Increment the value of your long variable, and print it out using the same format as above
    longVariable2 = longVariable2 + 1;
    printf("value of long: %ld\n", longVariable2);
    // (2x) Increment the value of your long variable, and print it out using the same format as above
    longVariable2 = longVariable2 + 1;
    printf("value of long: %ld\n", longVariable2);
    // (3x) Increment the value of your long variable, and print it out using the same format as above
    longVariable2 = longVariable2 + 1;
    printf("value of long: %ld\n", longVariable2);

    return 0;
}