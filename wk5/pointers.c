#include <stdio.h>

int main(int argc, char** argv) {

    // declaration, initialisation of a variable
    int var = 5; 
    printf("var: %d at address %p\n", var, (void*)&var);

    // getting the address
    int* var_address = &var; 
    printf("var_address: %p at address %p\n", (void*)var_address, (void*)&var_address);

    // making a copy of the variable's value
    int var_copy = var; 
    printf("var_copy: %d at address %p\n", var_copy, (void*)&var_copy);

    // making a change to var's value
    var = 10;
    printf("var_copy: %d and *var_address: %d\n", var_copy, *var_address);

    return 0;
}