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