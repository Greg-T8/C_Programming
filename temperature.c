#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0,20,...,300 */

int main()
{
    int fahr, celsius;
    int lower, uppper, step;

    lower = 0;    /* lower limit of temperature table */
    uppper = 300; /* upper limit */
    step = 20;    /* step size */

    fahr = lower;
    while (fahr <= uppper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%10d\t%10d\n", fahr, celsius); // \t is a tab character
        fahr = fahr + step;
    }
}