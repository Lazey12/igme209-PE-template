#include "Toy.h"
#include <iostream>
using namespace std; //it is here because .h will have this if i put it here

Toy::Toy(string _name, unsigned short _age)
{
	name = _name;
	age = _age;
}

void Toy::print()
{
	cout << name << " is " << age << " years old";
}
