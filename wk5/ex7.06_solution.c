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
        // A: {1, 2, 4, 7, 8, 16}
        // {2, 7, 4, 8, 16} : 3
        // {7, 4, 8, 16} : 1 
        // find the smallest element's index
        min_index = index_of_smallest(A + i, n - i);
        // swap it to the first location
        int_swap(A + min_index + i, A + i);
    }
}

// {2, 5, 7, 10, 8} X
// A: {5, 7, 10, 8}
// A: {7, 10, 8}
// ...
void
selection_sort_recursive(int A[], int n) {

    // base case
    if (n <= 0) return; 

    // operations (optional)
    int min_index = index_of_smallest(A, n); // 0
    int_swap(A + min_index, A + 0); //0

    // recursive case
    selection_sort_recursive(A + 1, n - 1);

    // operations (optional)

    
}