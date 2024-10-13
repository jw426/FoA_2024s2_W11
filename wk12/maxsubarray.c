#include <stdio.h>
#include <stdlib.h>
#include "arrayops.h"
/* maximum number of elements that can be stored in the array */
#define MAXVALS 1000

/* function prototypes */

int max_subarray(int[], int, int *, int *);

int
main(int argc, char *argv[]) {
    /* get the input */
    int A[MAXVALS];
    int n = read_int_array(A, MAXVALS);

    /* print the whole array */
    printf("original array:\n");
    print_int_array(A, n);

    /* get the result */
    int from, to;
    int sum = max_subarray(A, n, &from, &to);

    /* print the result */
    printf("maximum subarray:\n");
    print_int_array(A + from,
                    to - from + 1);   /* print A[from]..A[to] (inclusive) */
    printf("sum = %d\n", sum);

    return 0;
}

/* compute the maximum subarray sum of A with n elements
 * returns the maximum subarray sum, stores the indices for where the
 * maximum subarray starts (from) and ends (to).
 * Note: both A[from] and A[to] are included in the maximum subarray
 */
int
max_subarray(int A[], int n, int *from, int *to) {
    
}