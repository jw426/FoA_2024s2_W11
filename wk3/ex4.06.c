#include <stdio.h>

int main(int argc, char** argv) {
    
    // Take in input / Read in characters (getchar())
    char ch;
    int num_lines = 0, num_chars = 0;  
    while ((ch = getchar()) != EOF) {
        // Count the lines
        if (ch == '\n') {
             num_lines++;   
        }
        // Count the chars
        num_chars++;
    }
    
    printf("Lines %d, Chars %d\n", num_lines, num_chars);


     return 0;   
}