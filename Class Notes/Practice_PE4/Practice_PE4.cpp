// Practice_PE4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string longword = "supercalifrigalistic";
    int longwordLength = longword.length();

    std::cout << "Length is: " << longwordLength << endl;

    string secondWord = "expialidocious";
    string longerWordLength = longword + secondWord;
    std::cout << "Length is: " << longerWordLength << endl;

}
