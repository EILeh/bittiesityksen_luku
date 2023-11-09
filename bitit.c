#include "bitit.h"
#include <stdio.h>
#include <limits.h>

void scharBitit(signed char x)
{

    signed char y;

    signed char bit;
    int i;
    int zeroBits;
    int oneBits;

    zeroBits = 0;
    oneBits = 0;
    y = x%256;
    printf("%d\n", y);
    for (i = CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (x >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");


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



    short int bit;
    int i;
    int zeroBits;
    int oneBits;
    zeroBits = 0;
    oneBits = 0;

    printf("%d\n", x);
    for (i = sizeof(short int)*CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (x >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");


    for (i = 0; i < sizeof(short int)*CHAR_BIT; i++)
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

void intBitit(int x)
{


    int bit;
    int i;
    int zeroBits;
    int oneBits;
    zeroBits = 0;
    oneBits = 0;
    printf("%d\n", x);

    for (i = sizeof(int)*CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (x >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");


    for (i = 0; i < sizeof(int)*CHAR_BIT; i++)
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

void longBitit(long int x)
{


    long int bit;
    int i;
    int zeroBits;
    int oneBits;
    zeroBits = 0;
    oneBits = 0;
    printf("%ld\n", x);
    for (i = sizeof(long int)*CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (x >> i) & 1;
        printf("%ld", bit);
    }
    printf("\n");


    for (i = 0; i < sizeof(long int)*CHAR_BIT; i++)
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
