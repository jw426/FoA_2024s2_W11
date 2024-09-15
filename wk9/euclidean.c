#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y; 
} vector_t; 

struct myVector {
    int x, y;    
};

int main(int argc, char** argv) {
    vector_t v1; 
    v1.x = // some value
    v1.y = // some value
        
    vector_t v2 = {.x = _, .y = _};
    
    struct myVector s1; 
    
    return 0;   
}

double distance(vector_t p1, vector_t p2) {
    
}

