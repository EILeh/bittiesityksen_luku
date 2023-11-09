#include "bitit.h"
#include <stdio.h>
#include <limits.h>

void scharBitit(signed char x)
{

    signed char y;
    y = x%256;
    printf("%d\n", y);
    int bit;
    int i;
    int zeroBits;
    int oneBits;

    for (i = CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (x >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    zeroBits = 0;
    oneBits = 0;
    for (i = 0; i < CHAR_BIT; i++)
    {
        if ((x >> i) & 1)
        {
            oneBits++;
        }
        else
        {
            zeroBits++;
        }
    }
    printf("%d\n", zeroBits);
    printf("%d\n", oneBits);




}

void shortBitit(short int x)
{

    int num;
    int bin;
    int rem;
    int place;

    /*num = (signed char)x;*/
    bin = 0;
    rem = 0;
    place = 1;

    while (x)
    {
        rem = x % 2;
        x = x/2;

        bin = bin + (rem * place);
        place = place * 10;
    }

    printf("%d", bin);
}

void intBitit(int x)
{

    return;
}

void longBitit(long int x)
{

    return;
}
