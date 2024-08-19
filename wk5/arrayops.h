/* arrayops.h: array operations
 * Alistair Moffat, PPSAA, Chapter 7, December 2012
 * (c) University of Melbourne */

/* read integers from input and store them in an array.
 * maxvals is the maximum number of elements that can be read in to the array,
 * all other values are discarded
 * returns the number of elements successfully read in
 * (insertionsort.c, Figure 7.4 PPSAA) */
int read_int_array(int A[], int n);

/* exchange the values of the two variables indicated
 * by the arguments (insertionsort.c, Figure 7.4 PPSAA) */
void int_swap(int *p1, int *p2);

/* sorts n elements of array A in increasing order (2, 3, 4, 5)
 * using insertion sort (insertionsort.c, Figure 7.4 PPSAA) */
void sort_int_array(int A[], int n);

/* print the elements of an array on one line
 * (insertionsort.c, Figure 7.4 PPSAA) */
void print_int_array(int A[], int n);

// see arrayops.c for implementation
