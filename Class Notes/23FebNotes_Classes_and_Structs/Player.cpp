//unsecure code here
#define _CRT_SECURE_NO_WARNINGS
//unsecure code here
#include "Player.h"
#include <iostream> //printing code to console

typedef unsigned short ushort;

using namespace std;

#include <cstring>


//we have 2 constructors, Code does NOT know what to do
////Player()
//{
//
//}


//now it knows with Player::Player()
Player::Player() // <--- scope (::)
	:Player("Shiro", 4) //this means "go do parameterized first then do default one", it connects and minimizes.
	//basically uses the framework of the parameterized THEN the default one
{

	cout << "+Player()" << endl;
	Player("Shiro", 4); //creates object but it doesnt save to variable

	/*
	nickname = "Binky";

	//these are putting on the HEAP
	//why? 
	//- Any information on stack would be gone
	//new assignes stuff to heap , but needs to be deleted
	name - new char[6] {"Shiro"};
	numScores = 4;
	scores = new short[numScores];

	for (int i = 0; i <numScores; i++)
	{
		scores[i] = rand() % 100;
	}

	*/
}

//parameterized
Player::Player(const char* name, ushort numScores)
{
	cout << "+Player(name, numScores)" << endl;
	nickname = "Binky";

	//how to get: name?
	//this.name = new char[2] {"."}; //doesnt work because this points to itself.
	//this->name = name; //passing a const, unmodifyable, in order to work:

	int nameLen = strlen(name);
	this->name = new char[nameLen +1]; //+1 because nullTerminator
	strncpy(this->name, name,nameLen+1); //copy everything

	this->numScores;
	scores = new short[numScores];

	for (int i = 0; i < numScores; i++)
	{
		scores[i] = rand() % 10;
	}
}


//destructor
Player::~Player()
{
	cout << "~Player()" << endl;
	delete[] name;
	delete[] scores;
}

void Player::print()
{
	cout << name << "( " << " : ";
	for (int i = 0; i < numScores; i++)
	{
		cout << scores[i] << ", ";
	}
	cout << endl;
}