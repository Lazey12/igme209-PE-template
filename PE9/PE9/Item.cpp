#define _CRT_SECURE_NO_WARNINGS
#include "Item.h"
#include <cstring>
#include <iostream> //printing code to console

using namespace std;

Item::Item(const char* iName, int iWeight)
{
	itemName = new char[strlen(iName) + 1];
	strcpy(itemName,iName);

	itemWeight = iWeight;
}

Item::~Item()
{
	delete[] itemName;
	itemName = nullptr;
}

void Item::print()
{
	cout << "- " << itemName << ": " << itemWeight << "lbs"<< endl;
}
