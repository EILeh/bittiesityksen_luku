#include <stdio.h>
#include <stdlib.h>
#include "bitit.h"

int main(int argc, char *argv[])
{
    int x;
    signed char schar_x;

    x = atoi(argv[1]);

    schar_x = argv[1];

    printf("%d\n", x);

    scharBitit(schar_x);






    shortBitit(x);



    intBitit(x);




    longBitit(x);



    return 0;
}
