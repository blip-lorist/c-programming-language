#include <stdio.h>

/* count lines, spaces, tabs in input */ 
main()
{
    int c, nl, spaces, tabs;
    nl = 0; 

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;

    printf("%d new lines \n", nl);
}

