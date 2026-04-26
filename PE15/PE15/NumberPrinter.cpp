#include "NumberPrinter.h"

NumberPrinter::NumberPrinter(int num)
{
    number = num;
}

void NumberPrinter::Print()
{
    for (int i = 0; i < 50; i++)
    {
        cout << number << " ";
    }
}