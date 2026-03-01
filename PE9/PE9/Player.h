#pragma once
#include <vector>
#include "Item.h"
class Player
{
private:
	char* name;
	int health;
	std::vector<Item*> inventory;


public:

	//default const
	Player();

	//parameter const
	Player(const char* name, int health);

	//destructor
	~Player();

	void printInfo();

	void addItem(Item* item);
};

