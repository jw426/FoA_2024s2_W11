#include <stdio.h>
#include <ctype.h>
#include "listops.h"

typedef int data_t;
typedef list_t stack_t; 

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

// TODO: implement the functions
stack_t *make_empty_stack() {
    return make_empty_list();
}

void free_stack(stack_t *s) {
    free_list(s);
}

void push(stack_t *s, data_t value) {
    insert_at_head(s, value);
}

data_t pop(stack_t *s) {
    data_t data_at_head = get_head(s);
    get_tail(s);
    return data_at_head; 
}