#include <stdio.h>

/* count digits, white space, others */ 
main()
{
    /* declare variables, set integer type */
    int c, i, whitespace, other;
    /* declare array with 10 integer spaces allocated */ 
    int digits[10];

    /* set counters to 0 */ 
    whitespace = other = 0;

    for (i = 0; i < 10; ++i)
        /* fill the array with 0s */ 
        digits[i] = 0;

    /* until we reach the end of file */ 
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++digits[c];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++whitespace;
        else 
            ++other;

    printf("digits = ");
    for (i = 0; i < 10; ++i)
        printf(" %d", digits[i]);
    printf(", white space = %d, other = %d\n", whitespace, other);
}

    
