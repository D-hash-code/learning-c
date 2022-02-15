//
// Created by Darshan Hindocha on 15/02/2022.
//

#include <stdio.h>

/* copy input to output: third version */

main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        /* EOF is -1 ?? printf("EOF %3d\n",EOF); */
    }

}