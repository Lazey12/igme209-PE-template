// PE9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS 

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include <iostream>
#include "Player.h"
#include "Item.h"
using namespace std;


void mainWrapper();

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

void mainWrapper()
{
	Player p1;
	Player* p2 = new Player("Shiro", 80);

	p1.printInfo();
	p2->printInfo();

	Item* i1 = new Item("Sword", 10);
	Item* i2 = new Item("Shield", 15);

	i1->print();
	i2->print();

	//adds the items to each player
	p1.addItem(new Item("Sword", 10));
	p2->addItem(new Item("Shield", 15));

	p1.printInfo();
	cout << endl;

	p2->printInfo();

	delete p2;
	delete i1;
	delete i2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

