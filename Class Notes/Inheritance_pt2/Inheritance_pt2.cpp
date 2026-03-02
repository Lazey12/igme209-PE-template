// Inheritance_pt2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#include <iostream>
#include <vector>
using namespace std;

#include "Character.h"
#include "Cleric.h"

void wrapper();

//what is override? - use THIS function instead of the parent one
//what is overload? - it has variants and use that one that has my speciic parameter that i setted up.
// - we CAN OVERLOAD functions
// - we CAN OVERLOAD operators


//what does virtual mean? - keyword for parent functions to be linked during the compiler phase of the project.
//it means it can be OVERRIDDEN by code for us
//but for buildtime, it means that: it is double check the we dont need to leverage polymorphism.


//the char ptr needs to be placed in placeholder in run time
//if we put a virtual on the char.opp's desturctor , 
//it will be setted up a link and then check the child's destructor

int main()
{
	wrapper();

	if (_CrtDumpMemoryLeaks())
		cout << "\nMEMORY LEAKS!" << endl;
	else
		cout << "\nNo memory leaks. :)" << endl;
}

void wrapper()
{
	cout << "~~ CREATE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	Character parentObj = Character("Lacy");
	cout << endl;

	Cleric childObj = Cleric("Pax", "Attention");
	cout << endl;

	Character* parentPtrToChildObj = new Cleric("Aiden","Food");
	cout << endl;

	cout << "~~ PRINT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	parentObj.PrintData();
	parentObj.PrintType();
	cout << endl;

	childObj.PrintData();
	childObj.PrintType();
	cout << endl;

	parentPtrToChildObj->PrintData();
	parentPtrToChildObj->PrintType();
	cout << endl;

	cout << "~~ CLEAN UP ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	//we are only getitng the character destructor instead of the cleric destructor
	//so aiden needs cleric destructor, as aiden is cleric under the hood

	delete parentPtrToChildObj;
	cout << endl;
}