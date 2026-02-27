// 27Feb_ClassNotes_Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <vector>
#include "Toy.h"



///notes:

//c++ inheritance has a public word from parent class compared to c#, and it is backwards
//if inheritance level is changed form public to protected,
// the child gets the authority to access protected level AND locked "this->" to pretected
//if it is changed to private, then the child's "this->" becomes private

//using a parent method will be needing

//mark the child to be explicit with the "virtual", and in child class mark as "override" it goes after.


//parent if referencing child, it needs to be a pointer

//if the child does not have destructor it will go to the parent destructor


//polymorphism is stilla lthing in c++
//if reversed, only parent version would get called
//if only normal version, the child version would get called

int main()
{
    vectorExample();
}

void vectorExample()
{
    vector<Toy*> myToys = vector<Toy*>();

}

void wrapper()
{

}
