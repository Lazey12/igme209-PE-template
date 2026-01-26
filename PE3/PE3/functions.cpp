#include "functions.h"

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

bool inOrder(int a, int b, int c)
{
    if (a <= b && b <= c)
    {
        return true;
    }
    return false;
}