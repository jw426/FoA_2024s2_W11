#include <stdio.h>

int main(int argc, char**) {

    int i, j, sum;

    // for (i=0; i<20; i=i+3) {
    //     printf("%2d\n", i);
    // }

    // for (i=1; i<2000000; i=2*i) {
    //     printf("%7d\n", i);
    // }

    // sum = 0;
    // for (i = 1; i < 10; i++) {
    //     sum = sum + i;
    //     printf("S(%2d) = %2d\n", i, sum);
    // }

    // for (i=0; i<8; i++) {
    //     for (j=i+1; j<8; j+=3) {
    //         printf("i=%d, j=%d\n", i, j);
    //     }
    // }

    // for (i=0; i<8; i++) {
    //     for (j=i+1; j<8; j+=3) {
    //         if (i+j==7) {
    //             break;
    //         }
    //         printf("i=%d, j=%d\n", i, j);
    //     }
    // }

    // j=5;
    // for (i=0; i<j; i++) ; {
    //     printf("i=%d, j=%d\n", i, j);
    // }
    
    j=5;
    for (i=0; i<j; j++); {
        printf("i=%d, j=%d\n", i, j);
    }

    return 0;
}