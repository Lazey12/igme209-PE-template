#include "functions.h"

int min(int integer1, int integer2)
{
	if (integer1 < integer2)
	{
		return integer1;
	}
	if (integer2 < integer1)
	{
		return integer2;
	}
	else
	{
		return integer1;
	}
}

int max(int maxInt1, int maxInt2)
{
	if (maxInt1 > maxInt2)
	{
		return maxInt1;
	}
	if (maxInt2 > maxInt1)
	{
		return maxInt2;
	}
	else
	{
		return maxInt1;
	}
}

bool inOrder(int a, int b, int c)
{
	if ((a <= b) && (b <=c))
	{
		return true;
	}
	else
	{
		return false;
	}
}