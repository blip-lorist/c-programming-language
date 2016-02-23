#include <stdio.h>
/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300; */
main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
   
    printf("Celsius Fahr\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%5.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
