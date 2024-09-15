#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* two-d points */
typedef struct {
    // add code
} vector_t;

/* polygons */
#define MAXPTS 100
#define MINPTS 3
typedef struct {
    // add code
} poly_t;

/* function prototypes */


int
main(int argc, char *argv[]) {

    printf("Enter (%d-%d) points counter-clockwise:\n", MINPTS, MAXPTS);
    
    poly_t poly;
    // read in from stdin

    // and get the perimeter
    int peri = perimeter(poly);
    printf("Perimeter is %.4f\n", peri);

    return 0;
}

/* compute the perimeter (sum of all lengths of edges) of a polygon */
double
perimeter(poly_t P) {
    
}

/* We can reuse a function we've already written! from Ex8.02*/

/* return the Euclidean distance between the given vectors (ex8-02 soln.) */
double
distance(vector_t p1, vector_t p2) {
    double deltax = p1.x - p2.x;
    double deltay = p1.y - p2.y;
    return sqrt(deltax * deltax + deltay * deltay);
}
