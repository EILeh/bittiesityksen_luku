#include <stdio.h>
#include <stdlib.h>
#include "bitit.h"

int main(int argc, char *argv[])
{



    int x;

    x = atoi(argv[1]);

    printf("%d", x);
    scharBitit(x);





    shortBitit(x);



    intBitit(x);




    longBitit(x);



    return 0;
}
