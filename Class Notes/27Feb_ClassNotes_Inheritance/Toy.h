#pragma once

#include <string> //this no choice, because need to put parameter
class Toy
{
public:
	Toy(std::string _name, unsigned short _age);
	void print();


private:
	std::string name;
	unsigned short age;

};

