#include "bitit.h"
#include <stdio.h>
#include <stdio.h>

void scharBitit(signed char x)
{
    int num;
    int bin;
    int rem;
    int place;

    num = (signed char)x;
    bin = 0;
    rem = 0;
    place = 1;

    while (num)
    {
        rem = num % 2;
        num = num/2;

        bin = bin + (rem * place);
        place = place * 10;
    }

    printf("%d", bin);


}

void shortBitit(short int x)
{

    return;
}

void intBitit(int x)
{

    return;
}

void longBitit(long int x)
{

    return;
}
