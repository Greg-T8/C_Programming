#include <stdio.h>

/*
    print Fahrenheit-Celsius table for fahr = 0,20,...,300;
    floating-point version
*/

int main()
{
    float fahr, celsius;
    int lower, uppper, step;

    lower = 0;    /* lower limit of temperature table */
    uppper = 300; /* upper limit */
    step = 20;    /* step size */

    fahr = lower;
    while (fahr <= uppper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius); // \t is a tab character
        fahr = fahr + step;
    }
}