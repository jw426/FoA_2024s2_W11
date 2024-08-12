#include <stdio.h>
#include <stdlib.h>

int amicable_pair(int n1, int n2);
int sum_factors(int num);

int main(int argc, char** argv) {

    // main headquarters!
    printf("Enter ...");
    int n1, n2; 
    if (scanf("%d %d", &n1, &n2) != 2) {
        exit(EXIT_FAILURE);
    }

    if (amicable_pair(n1, n2)) {
        printf("..amicable");
    } else {
        printf("..not amicable");
    }

    return 0;
}

int amicable_pair(int n1, int n2) {

    // return value should be
    // 1 if amicable
    // 0 if else
    return sum_factors(n1) == n2 && sum_factors(n2) == n1; 
}

int sum_factors(int num) {

    int sum = 1;
    int i; 

    // O() - efficiency 
    for (i = 2; i * i < num; i++) {
        // i = 0, 1, 2, ... num -> ~ num of times 
        // O(n)

        // O(sqrt(n))

        if (num % i == 0) {
            sum += i;
            sum += (num / i);
        }
    }

    if (i * i == num) {
        sum += i;
    }

    return sum; 

    // return value should be int
}