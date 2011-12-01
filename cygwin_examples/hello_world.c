// This includes the standard input/output library used by C.
#include <stdio.h>

// This is the main "function" of the program.
// Functions are like the verbs of a programming language, they perform tasks.
// In C, main() is always called first, so it will be the starting point of the program.
main() {
    /* The following function is printf(), (notice how all functions have () after them)
    its purpose is to print a line of text to the screen. Here it is printing
    hello, world and then \n. \n is the newline symbol, it starts a new line.
    */
    printf("hello, world\n");
    // getchar() is a command which gets the user's input from the command line.
    // In this scenario, we are simply using it to stop the program from closing prematurely
    // because once main is finished running, the program terminates.
    getchar();
}