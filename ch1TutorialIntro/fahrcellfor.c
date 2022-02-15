//
// Created by Darshan Hindocha on 14/02/2022.
//

#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    /* Exercise 1-5. Modify the program to print in reverse order */

    while (fahr >= 0){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
        fahr = fahr - 20;
    }
}