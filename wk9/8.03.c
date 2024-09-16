#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* two-d points */
typedef struct {
    double x, y; 
} vector_t;

/* polygons */
#define MAXPTS 100
#define MINPTS 3
typedef struct {
    vector_t points[MAXPTS];
    int n; 
} poly_t;

/* function prototypes */
double
perimeter(poly_t P);
double
distance(vector_t p1, vector_t p2);

int
main(int argc, char *argv[]) {

    printf("Enter (%d-%d) points counter-clockwise:\n", MINPTS, MAXPTS);
    
    poly_t poly;
    int i = 0; 
    vector_t tmp;
    // read in from stdin
    while (scanf("%lf,%lf", &(tmp.x), &(tmp.y)) == 2) {
        poly.points[i] = tmp; 
        i++; 
    }
    poly.n = i; 
    
    // and get the perimeter
    double peri = perimeter(poly);
    printf("Perimeter is %.4lf\n", peri);

    return 0;
}

/* compute the perimeter (sum of all lengths of edges) of a polygon */
double
perimeter(poly_t P) {
    
    double peri = 0.0;
    for (int i = 0; i < P.n - 1; i++) {
        peri += distance(P.points[i], P.points[i+1]);
    }
    peri += distance(P.points[0], P.points[P.n-1]);
    
    return peri;   
}

/* We can reuse a function we've already written! from Ex8.02*/

/* return the Euclidean distance between the given vectors (ex8-02 soln.) */
double
distance(vector_t p1, vector_t p2) {
    double deltax = p1.x - p2.x;
    double deltay = p1.y - p2.y;
    return sqrt(deltax * deltax + deltay * deltay);
}
