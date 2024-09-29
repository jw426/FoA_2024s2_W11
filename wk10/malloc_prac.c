/* Exercises 4-7 in lec07 slides Foundations of Algorithms (COMP10002)
   Introduction to memory management.

   Andrew Chester, October 2012
*/

#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <string.h>

char *string_dupe(char *s);
char **string_set_dupe(char **S);
void string_set_free(char **S);

int
main(int argc, char** argv) {
    char *dup;
    char **dups;
    int i;

    // no arguments put in 
    if (argc<2) {
        return 1;
    }

    /* Testing string_dupe */
    printf("string is:\n\t%s\n", argv[1]);
    dup = string_dupe(argv[1]);
    printf("duplicate is:\n\t%s\n", dup);

    /* Testing string set dupe */
    printf("string set is (1 per line):\n");
    for(i=1; i<argc; i++) {
        printf("\t%s\n", argv[i]);
    }

    dups = string_set_dupe(argv);

    printf("duplicated string set is:\n");
    for(i=1; dups[i]; i++) {
        printf("\t%s\n", dups[i]);
    }

    /* Freeing the memory */
    free(dup);
    dup = NULL;
    string_set_free(dups);
    dups = NULL;

    return 0;
}

/* Exercise 4: duplicate a single string. Since we don't know in advance how
   long the string will be, we need to allocate the memory ourselves.*/
char
*string_dupe(char *s) {

}

/* Exercise 5: duplicates a set of strings. We use our previous function for
   each individual string, but we must allocate more memory to point to them
   all. */
char
**string_set_dupe(char **S) {

}

/* Exercise 6: Frees all the memory used by the set of strings. Note, each 
   string must be freed individually, and then S itself must be freed as well.
   This gives us one call to free for every call to malloc, which is a good
   sign. */
void
string_set_free(char **S) {
    
}