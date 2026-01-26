// PE4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char first[] = "supercalifragilistic";
    char second[] = "expialidocious";

    int firstLen = strlen(first);
    cout << "The length of supercalifragilistic is " << firstLen << endl << endl;

    //combined word out
    cout << first << second << endl;

    //i's in combined string
    int count = 0;

    for (int i = 0; i < firstLen; i++)
    {
        if (first[i] == 'i')
        {
            count++;
        }
    }

    int secondLen = strlen(second);
    for (int i = 0; i < secondLen; i++)
    {
        if (second[i] == 'i')
        {
            count++;
        }
    }

    cout << "The number of i's in the combo is " << count << endl;
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
