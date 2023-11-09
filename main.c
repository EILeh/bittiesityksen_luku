#include <stdio.h>
#include <stdlib.h>
#include "bitit.h"

int main(int argc, char *argv[])
{
    int x;
    signed char schar_x;
    long int xLong;
    xLong = atoi(argv[1]);

    x = atoi(argv[1]);

    schar_x = x;

/*    printf("%d\n", x);*/

    scharBitit(schar_x);

    printf("\n");

    shortBitit(x);

    printf("\n");

    intBitit(x);

    printf("\n");

    longBitit(xLong);


    return 0;
}
