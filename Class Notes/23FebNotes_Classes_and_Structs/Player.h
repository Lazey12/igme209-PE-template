#pragma once

#include <string>

//any member in a class is private!!!!!!!!!!!!!!!!!!
class Player
{
	//define the data first
	//private char* name; //char* wont compile because it expect a ';'? - 
	//private in numScores;
	//-------------------------------------------------------
	//wrong^^
	//-------------------------------------------------------

	//int thing2; //private by default ONLY before public


	//blockscoping instead of memeber by member
private:
	char* name;
	unsigned short numScores;
	short* scores;
	std::string nickname;

	//need to have the correct access modifier (public)
public:
	  //int thing;
	//default const
	Player();

	//parameterized const
	Player(const char* name, unsigned short numScores);
	void print();

	~Player(); //declare constructor

};//semi colon, after classes

