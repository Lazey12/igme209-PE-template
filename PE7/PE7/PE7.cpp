// PE7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int arr[7] = { 1, 2, 3, 4, 5, 6, -1 };

    cout << "Test array contents: ";

    int i = 0;
    while (arr[i] != -1)
    {
        cout << arr[i] << " ";
        i++;
    }

    cout << endl;
    cout << "-1 found at index " << i << endl;

    cout << "\nPart 1\n";

    int lenArray = getLengthArray(arr);
    cout << "getLengthArray returned: " << lenArray << endl;

    int* ptr = arr;
    int lenPointer = getLengthPointer(ptr);
    cout << "getLengthPointer returned: " << lenPointer << endl;


    //part 2 test arrays
    cout << "\nPart 2\n";


    //when this function is called the values printed are garbage or random
    //this happens because data is a local stack array
    //once the function ends the stack memory is gone

    //this function cannot take a size parameter because stack arrays
    //must have a compile time constant size in c++
    //only heap memory using "new" can be sized at runtime


    int* stackArr = createStackArray();
    int* heapArr = createHeapArray(5);

    cout << "Stack array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << stackArr[i] << " ";
    }

    cout << "\nHeap array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << heapArr[i] << " ";
    }

    cout << endl;

    delete[] heapArr;

    //check memory leaks
    if (_CrtDumpMemoryLeaks())
    {
        cout << "Memory leaks detected\n";
    }
    else
    {
        cout << "No memory leaks detected\n";
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
