#include <stdio.h>
/* set constants */
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
main()
{
    /* set all vars to integer types */
    int c, nl, nw, nc, state;
    
    /* assign state to constant, all other variables to 0 */
    state = OUT;
    nl = nw = nc = 0;
    /* while there's still text to process... */
    while ((c = getchar()) != EOF) {
        /* increment character counter */
        ++nc;
        if (c == '\n')
            /* increment new line counter */ 
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            /* we're outside of a word */ 
            state = OUT;
        else if (state== OUT) {
            /* we're inside of a word */ 
            state = IN;
            /* so let's count that word */ 
            ++nw;
        }
    }
    printf("Lines:%d Words:%d Characters:%d\n", nl, nw, nc);
}

