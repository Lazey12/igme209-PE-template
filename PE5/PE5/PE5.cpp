// PE5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "functions.h"

using namespace std;

int main()
{
    generateRandom(10);

    char input[128];
    while (true)
    {
        cout << "\nEnter a word: ";
        cin.getline(input, 128);


        ///q is always true
        // 
        //does not work because it writes characters to the wrong index
        //loop places characters starting at newString[length], but correct values
        //only go from 0 to "length-1"
        // 
        //if (input[0] == 'Q' || 'q')
        //{6
        //    return 0;
        //}


        if (input[0] == 'Q' || input[0] == 'q')
        {
            return 0;
        }

        cout << "The reverse of " << input;
        cout << " is " << reverseString_fixed(input) << endl;
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
