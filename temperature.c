#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main() /* start the script */
{
    int fahr, celsius;
    int lower, upper, step; /* sets integer type vars */

    lower = 0; /* where to start the table */
    upper = 300; /* where to end the table */ 
    step = 20; /* table value increments */ 

    fahr = lower; /* fahr begins at 0 */ 
    while (fahr <= upper) { /* while fahr is below or equal to 300 */ 
        celsius = 5 * (fahr-32) / 9; /* that standard formula */ 
        printf("%d\t%d\n", fahr, celsius); /* print it out */ 
        fahr = fahr + step; /* increment by 20 degrees */ 
    }
}

