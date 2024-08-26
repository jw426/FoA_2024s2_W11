#include <stdio.h>
#include <stdlib.h>
int cmp(const void* n1, const void* n2);

int main(int argc, char** argv) {

    int A[] = {5,5,1,2,3,4,15};
    qsort(A, 7, sizeof(int), cmp);
    for (int i = 0; i < 7; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}



// comparison function
// returns -1 if n1 < n2 
//          0 if n1 == n2
//      and 1 if n1 > n2 (and should be swapped)
int cmp(const void* n1, const void* n2) {
    return *(int*)n1 - *(int*)n2;
}



