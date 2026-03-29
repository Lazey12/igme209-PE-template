// PE12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include <iostream>
#include "functions.h"

using namespace std;

void mainWrapper()
{
	//uncomment this below to test that pointers do NOT auto delete memory
	//UseNormalPointer();

	//this one below does use smart pointers and it does auto clean memory
	UseSmartPointers();
}

int main()
{
	mainWrapper();

	if (_CrtDumpMemoryLeaks())
	{
		cout << "\nPOSSIBLE MEMORY LEAKS - CHECK DEBUG OUTPUT WINDOW!" << endl;
	}
	else
	{
		cout << "\nNo memory leaks detected." << endl;
	}
}