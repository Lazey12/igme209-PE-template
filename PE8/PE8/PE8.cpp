// PE8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    const int NUM_ELEMENTS = 10;
    int arr[NUM_ELEMENTS + 1]{};
    arr[NUM_ELEMENTS] = -1;

    cout << "Creating an array of " << NUM_ELEMENTS << " random integers." << endl;
    cout << "Which stats do you want to calculate?";
    cout << " (1-average, 2-min, 3-max, 4-all): ";

    int choice;
    cin >> choice;

    ArrayFunction* functions = nullptr;

    switch (choice)
    {
    case 1:
        functions = new ArrayFunction[4]{
            fillArray,
            printArray,
            printAverage, 
            nullptr 
        };
        break;

    case 2:
        functions = new ArrayFunction[4]{
            fillArray,
            printArray,
            printMin,
            nullptr 
        };
        break;

    case 3:
        functions = new ArrayFunction[4]{
            fillArray,
            printArray,
            printMax,
            nullptr 
        };
        break;

    case 4:
        functions = new ArrayFunction[6]
        { fillArray,
            printArray, 
            printAverage, 
            printMin, 
            printMax, 
            nullptr 
        };
        break;

    default:
        cout << "Invalid choice, defaulting to fill and print only." << endl;
        functions = new ArrayFunction[3]{ fillArray, printArray, nullptr };
    }

    cout << endl;

    callFunctions(functions, arr);

    delete[] functions;

    // memory leak check
    if (_CrtDumpMemoryLeaks())
    {
        cout << "Memory leaks detected." << endl;
    }
    else
    {
        cout << "No memory leaks detected." << endl;
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
