// PE3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "functions.h"

using namespace std;

void printCourse();

int main()
{
    printCourse();

    cout << "min(10, 20) = " << min(10, 20) << endl;
    cout << "min(20, 10) = " << min(20, 10) << endl;
    cout << endl;

    cout << "max(10, 20) = " << max(10, 20) << endl;
    cout << "max(20, 10) = " << max(20, 10) << endl;
    cout << endl;

    cout << "inOrder(10, 20, 30) = " << inOrder(10, 20, 30) << endl;
    cout << "inOrder(10, 30, 20) = " << inOrder(10, 30, 20) << endl;
    cout << endl;
}

void printCourse()
{
    cout << "IGME-209: Real-Time Simulations and Games 1 (RTSG1)" << endl;
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
