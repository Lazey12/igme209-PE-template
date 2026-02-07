#include "functions.h"

void passByValue(int value)
{
    value = 30;
}

void passByReference(int& value)
{
    value = 40;
}

void passByPointer(int* value)
{
    *value = 50;
}