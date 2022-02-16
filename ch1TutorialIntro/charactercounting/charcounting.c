//
// Created by Darshan Hindocha on 16/02/2022.
//

#include <stdio.h>

int main()
{
    long nc;
    long lc;
    int c;

    /* char and line counting */
    lc = 0;
    nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++lc;
    }
    printf("Number of Chars: %1ld \n", nc);
    printf("Number of Lines: %1ld \n", lc);
}