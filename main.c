#include <stdio.h>
#include <stdlib.h>
#include "bitit.h"

int main(int argc, char *argv[])
{
    short int x;
    signed char schar_x;

    x = atoi(argv[1]);

    schar_x = x;

/*    printf("%d\n", x);*/

    scharBitit(schar_x);

    printf("\n");

    shortBitit(x);

    printf("\n");

    intBitit(x);

    printf("\n");

    longBitit(x);


    return 0;
}
