//
// Created by Darshan Hindocha on 16/02/2022.
//

#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main() {
    long wc;
    int c;
    int state;

    state = OUT;
    wc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++wc;
        }
    }

    printf("Number of Words: %1ld \n", wc);
}

// Exercise 1.11
// How would you test the word count program?
    // run some inputs through the program and compare output against expected output
    // include edge cases like empty strings and all space strings
// What kinds of input are most likely to uncover bugs if there are any?
    // empty inputs? does a number count as a word?