//
// Created by Darshan Hindocha on 14/02/2022.
//

#include <stdio.h>

#define LOWER 0 /* the lower bound of the range of interest */
#define UPPER 300 /* the upper bound of the range of interest */
#define STEP 20 /* the size of the intervals we consider */

int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    /* Exercise 1-5. Modify the program to print in reverse order */

    while (fahr >= 0){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        fahr = fahr - 20;
    }
}