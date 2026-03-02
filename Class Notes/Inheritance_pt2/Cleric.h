#pragma once

#include "Character.h"

class Cleric :
	public Character
{
public:
	Cleric();
	Cleric(std::string _name, std::string _deity);
	~Cleric(); //do NOT override
	//do not have the child to override parent instead we use virtual
	//on parent so it tells the code that it will run both, especially pre C++11

	void PrintData() override;

	//override so it can tie to the virtual in character.h
	void PrintType() override;

protected:
	std::string deity;

private:
	int* childDynamicData;
};
