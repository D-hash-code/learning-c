//
// Created by Darshan Hindocha on 21/02/2022.
//


// when you call a function with certain arguments, it creates a local copy of those arguments
// and so if you adjust the argument values in the function it will NOT change the global input argument
// with some other languages (like Fortran) by changing the input of a function internally, the global
// variable changes too.

// If you want to change the global variable, the caller must provide a memory address of the variable
// and the called function must declare the variable to be a pointer and access the variable indirectly through that

// Not the case for arrays where no local copys are made

#include <stdio.h>

int power(int m, int n);
    int main(){
        int b, e;

        b=5;
        e=3;
        printf("%d %d %d", b,e, power(b,e));

    }
    int power(int base, int n)
    {
        int p;

        for (p=1; n>0; --n)
            p = p * base;
        return p;
    }

