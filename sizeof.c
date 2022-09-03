/** sizeof.c
 * =============================================================
 * Name: Benjamin Tat
 * Section:  T6
 * Project:  Lab 04
 * Purpose:  Determine the size of various data types
 * ============================================================= */

// Create Include Statements Here
#include <stdio.h>

int main() {

    // Create Your Variables Here
    int intVar;
    long longVar;
    float floatVar;
    double doubleVar;
    char charVar;

    // Create Your Print Statements Here
    printf("An int variable uses %02ld bytes \n", sizeof(intVar));
    printf("A long variable uses %02ld bytes \n", sizeof(longVar));
    printf("A float variable uses %02ld bytes \n", sizeof(floatVar));
    printf("A double variable uses %02ld bytes \n", sizeof(doubleVar));
    printf("A char variable uses %02ld bytes \n", sizeof(charVar));

    return 0;
}