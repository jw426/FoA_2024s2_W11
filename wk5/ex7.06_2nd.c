#include <stdio.h>
#include "arrayops.h"

// Maximum size of numbers array
// #define

/* function prototypes */
int
index_of_smallest(int A[], int n);
void
selection_sort(int A[], int n);


int
main(int argc, char *argv[]) {
    
    int A[1000];
    int n = read_int_array(A, 1000);

    selection_sort(A, n);

    print_int_array(A, n);

    return 0;
}

/* returns index of smallest value in the supplied array
 * another name for this function is argmax 
 * iterative version */
int
index_of_smallest(int A[], int n) {

    int min_index = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] < A[min_index]) {
            min_index = i;
        }
    }
    return min_index; 
   
}

/* implements selection sort by repeatedly swapping
   the next smallest item in the array into the first position of a
   decreasing array segment
   iterative version
*/
void
selection_sort(int A[], int n) {

    int min_index; 
    for (int i = 0; i < n; i++) {
        // find the smallest element's index
        min_index = index_of_smallest(,);
        // swap it to the first location
        int_swap(&A[min_index],);
    }
}

void
selection_sort_recursive(int A[], int n) {

    
}