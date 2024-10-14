/* array operations
 * Alistair Moffat, PPSAA, Chapter 7, December 2012
 * (c) University of Melbourne */
#include <stdio.h>

#include "arrayops.h"

/* ****
 * These functions are very slightly modified from insertionsort.c in Figure 7.4
 * Fig 7.4 on pg107 in PPSAA by Alistair Moffat, updating style and comments.
 * **** */

/* sorts n elements of array A in increasing order (2, 3, 4, 5)
 * using insertion sort (insertionsort.c, Figure 7.4 PPSAA) */
void
sort_int_array(int A[], int n) {
    /* assume that A[0] to A[n-1] have valid values */

    for (int i = 1; i < n; i++) {
        /* swap A[i] left into correct position (increasing order). */
        for (int j = i - 1; j >= 0 && A[j] > A[j + 1]; j--) {
            /* not there yet */
            int_swap(&A[j], &A[j + 1]);
        }
    }
}

/* exchange the values of the two variables indicated
 * by the arguments (insertionsort.c, Figure 7.4 PPSAA) */
void
int_swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

/* read integers from input and store them in an array.
 * maxvals is the maximum number of elements that can be read in to the array,
 * all other values are discarded
 * returns the number of elements successfully read in
 * (insertionsort.c, Figure 7.4 PPSAA) */
int
read_int_array(int A[], int maxvals) {
    int n = 0, excess = 0, next;

    printf("Enter as many as %d values, ^D to end\n", maxvals);
    while (scanf("%d", &next) == 1) {
        if (n == maxvals) {
            excess += 1;
        } else {
            A[n] = next;
            n += 1;
        }
    }

    printf("%d values read into array", n);
    if (excess) {
        printf(", %d excess values discarded", excess);
    }
    printf("\n");
    return n;
}

/* print the elements of an array on one line
 * (insertionsort.c, Figure 7.4 PPSAA) */
void
print_int_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %3d", A[i]);
    }
    printf("\n");
}
