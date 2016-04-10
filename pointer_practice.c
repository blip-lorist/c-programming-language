#include <stdio.h>

int main() {

    int var1;
    char var2[10];
    int *ip;

    ip = &var1;

    var1 = 1;

    printf("Address of var1 variable: %x\n", &var1);
    printf("Address of var2 variable: %x\n", &var2);
    printf("Address of our fancy ip pointer: %x\n", ip);
    printf("Printing out our pointer's value: %d\n", *ip);
    *ip += 1;
    printf("After incrementing our pointer, var1 is %d\n", var1);
    return 0;
    }
