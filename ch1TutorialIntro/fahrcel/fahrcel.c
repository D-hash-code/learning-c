//
// Created by Darshan Hindocha on 13/02/2022.
//

#include <stdio.h>

/* print Fahrenheit-Celsius values between
 * range 0-300 Fahr in increments of 20
 * conversion formula Cel = (5/9)*(F-32)*/

main() {

    float fahr, celsius;
    float step, lower, upper;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while(fahr<=upper){
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}