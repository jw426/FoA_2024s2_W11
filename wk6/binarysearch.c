/* Illustrate the binary search process.
*/
#include <stdio.h>

typedef int data_t;

#define BS_NOT_FOUND (-1)
#define BS_FOUND 0
int binary_search(data_t[], int, int, data_t*, int*);


int
cmp(data_t *x1, data_t *x2) {
	return (*x1-*x2);
}

int
main(int argc, char *argv[]) {
	int locn;

	int A[5] = {1,1,1,2,2};

	int key = 1; 

	if (binary_search(A, 0, 5, &key, &locn) == BS_NOT_FOUND) {
			printf("%d is not in A\n", key);
	} else {
		printf("%d is in A[%d]\n", key, locn);
	}

	return 0;
}

int
binary_search(data_t A[], int lo, int hi, 
		data_t *key, int *locn) {
	int mid, outcome;
	/* if key is in A, it is between A[lo] and A[hi-1] */
	if (lo>=hi) {
		return BS_NOT_FOUND;
	}
	mid = (lo+hi)/2;
	if ((outcome = cmp(key, A+mid)) < 0) {
		return binary_search(A, lo, mid, key, locn);
	} else if (outcome > 0) {
		return binary_search(A, mid+1, hi, key, locn);
	} else {
		*locn = mid;
		return BS_FOUND;
	}
}

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */