#include "functions.h"

void passByValue(int value)
{
	value = 30;
}

void passByReference(int* reference)
{
	*reference = 40;
}

void passByPointer(int* pointer)
{
	int dereference = *pointer;

	*pointer = 50;
}