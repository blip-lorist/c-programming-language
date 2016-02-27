#include <stdio.h>

/* Count characters in input; first version */

main()
{
    double nc;
        
    /* you can use ++ as a prefix or postfix */ 
    for (nc = 0; getchar() != EOF; ++nc)
        ; /* lonely little null statement */ 
    printf("%.0f\n", nc);
}
