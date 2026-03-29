#pragma once
#include <string>

class Level
{
public:
	Level(std::string _name, int _enemies);
	~Level();
	void print();

private:
	int enemies;
	std::string name;
};
