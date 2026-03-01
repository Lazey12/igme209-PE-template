#define _CRT_SECURE_NO_WARNINGS
#include "Player.h"
#include <cstring>
#include <iostream> //printing code to console
using namespace std;

//default const
Player::Player()
{
	name = new char[strlen("Player") + 1];
	strcpy(name, "Player");

	health = 100;
}

//parametrized const
Player::Player(const char* playerName, int playerHealth)
{
	//alocate name on heap
	name = new char[strlen(playerName) + 1];
	strcpy(name, playerName);

	health = playerHealth;
}

Player::~Player()
{
	delete[] name;
	name = nullptr;

	for (Item* item : inventory)
	{
		delete item;
		item = nullptr;
	}

}

//void its o it matches .h, and prints info, 
// PLayer:: to make it knwo to use the .h file's stuff
// then print the stuff out
void Player::printInfo()
{
	cout << "Player: " << name << endl;
	cout << "\tHealth: " << health << endl;

	for (Item* item : inventory)
	{
		std::cout << "\t";
		item->print();
	}
}

void Player::addItem(Item* item)
{
	inventory.push_back(item);
}
