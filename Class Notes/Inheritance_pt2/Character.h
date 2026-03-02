#pragma once

// Using string so we don't have to worry about memeory management
#include <string>

//#define CHAR_DEBUG_ON 1

struct Character
{


	//missing a virtual
public:
	Character();
	Character(std::string _name);

	virtual ~Character();

	virtual void PrintData();

	//this needs to have virtual so that the child cna use THIS one istead of the one the child has
	virtual void PrintType();

protected:
	std::string name;

private:
	int* parentDynamicData;
};
