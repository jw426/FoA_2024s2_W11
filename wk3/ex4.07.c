#include <stdio.h>

/**
    Word is distinguished by a whitespace
**/
int main(int argc, char** argv) {
    
    // set a flag variable! (inaword)
    int in_a_word = 0;
        
    // Take in input / Read in characters (getchar())
    char ch;
    int num_lines = 0, num_chars = 0, num_words = 0;  
    while ((ch = getchar()) != EOF) {
        // Count the lines
        if (ch == '\n') {
             num_lines++;   
        }
        // Count the chars
        num_chars++;
        // start of a new word
        if (!in_a_word && ch != ' ') {
            num_words++;
            in_a_word = 1; 
        }
        if (ch == ' ' || ch == '\n') {
            in_a_word = 0;
        }
    }
    
    printf("Lines %d, Words: %d, Chars %d\n", num_lines, num_words, num_chars);


     return 0;   
}