#include <stdio.h>
#include <stdlib.h>
#include "arrayops.h"  // includes read_int_array, print_int_array

/* maximum array size allowed */
// #define

/* function prototypes */

int
main(int argc, char *argv[]) {
    /* get the input */

    /* call the function of interest */

    /* prove that we didn't modify numbers, as required */

    return 0;
}

/* find the most frequent integer in an array in O(n^2) time
 * (based on insertionsort.c, Figure 7.4 PPSAA) */
int
most_frequent(int A[], int n) {

    /* defensive test, can't have most frequent item in empty array */
    if (n == 0) {
        printf("Error: empty array passed to most_frequent()\n");
        exit(EXIT_FAILURE);
    }

}