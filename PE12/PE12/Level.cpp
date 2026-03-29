#include "Level.h"
#include <iostream>
using namespace std;

Level::Level(std::string _name, int _enemies)
{
	name = _name;
	enemies = _enemies;
	cout << "Level Constructor: " << name << endl;
}

Level::~Level()
{
	cout << "Level Destructor: " << name << endl;
}

void Level::print()
{
	cout << "Level: " << name << " | Enemies: " << enemies << endl;
}