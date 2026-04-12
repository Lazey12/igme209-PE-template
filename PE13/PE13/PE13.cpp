// PE13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    cout << "iterative:\n";
    for (unsigned int i = 1; i <= 5; i++)
    {
        cout << i << " seats --> "
            << numHands_iterative(i) << " hands!\n";
    }

    cout << "\nrecursive:\n";
    for (unsigned int i = 1; i <= 5; i++)
    {
        cout << i << " seats --> "
            << numHands_recursive(i) << " hands!\n";
    }

    cout << "\ncalculated via formula:\n";
    for (unsigned int i = 1; i <= 5; i++)
    {
        cout << i << " seats --> "
            << numHands_calc(i) << " hands!\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
