#include "functions.h"

//iterations
unsigned int numHands_iterative(unsigned int n)
{
    unsigned int total = 0;

    for (unsigned int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            total += 4;
        }
        else
        {
            total += 3;
        }
    }

    return total;
}

//recursion
unsigned int numHands_recursive(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n % 2 == 0)
    {
        return 4 + numHands_recursive(n - 1);
    }
    else
    {
        return 3 + numHands_recursive(n - 1);
    }
}

//the formula
unsigned int numHands_calc(unsigned int n)
{
    unsigned int oddSeats = (n + 1) / 2;
    unsigned int evenSeats = n / 2;

    return (oddSeats * 3) + (evenSeats * 4);
}