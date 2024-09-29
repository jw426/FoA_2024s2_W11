#include <stdio.h>
#include <ctype.h>

typedef int data_t;

typedef struct {
    size_t size;
    size_t capacity;
    data_t *elems;
} stack_t;

stack_t *make_empty_stack();
void free_stack(stack_t *s);
void push(stack_t *s, data_t value);
data_t pop(stack_t *s);

int
main(int argc, char *argv[]) {
    
    stack_t *s = make_empty_stack();
    char c;
    while ((c = getchar()) != EOF) {
        if (c == 'p') {
            printf("Popped %d from the stack\n", pop(s));
        } else if (isdigit(c)) {
            push(s, c - '0');
        }
    }
    free_stack(s);
}

// TODO: implement the functions without using listops.c
// use realloc() instead!