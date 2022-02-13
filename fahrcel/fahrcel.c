//
// Created by Darshan Hindocha on 13/02/2022.
//

#include <stdio.h>

/* print Fahrenheit-Celsius values between
 * range 0-300 Fahr in increments of 20
 * conversion formula Cel = (5/9)*(F-32)*/

main() {

    int fahr, celsius;
    int step, lower, upper;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while(fahr<=upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}