#include "functions.h"
#include <iostream>
using namespace std;

void UseNormalPointer()
{
	Level* lvl = new Level("Dungeon", 10);

	lvl->print();

	//this code below is not deleting
	//delete lvl;
}

std::shared_ptr<Level> CreateSharedPointer()
{
	return std::make_shared<Level>("Castle", 20);
}

std::unique_ptr<Level> CreateUniquePointer()
{
	return std::make_unique<Level>("Forest", 5);
}


//this is the auto cleanup pointer method
void UseSmartPointers()
{
	shared_ptr<Level> sharedLvl = CreateSharedPointer();
	unique_ptr<Level> uniqueLvl = CreateUniquePointer();

	sharedLvl->print();
	uniqueLvl->print();

}