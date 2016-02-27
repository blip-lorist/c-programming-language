#include <stdio.h>

/* copy input to output; */ 
main()
{
    int c;


    while ((c = getchar()) != EOF) {
        printf("The value of getchar() != EOF is: %d \n", (getchar() != EOF));
    }
}
