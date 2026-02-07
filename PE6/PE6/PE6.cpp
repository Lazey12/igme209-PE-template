// PE6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    //in called myInt is 10, then prints it out
    int myInteger = 10;
    cout << "myInteger - initial value: " << myInteger << endl;

    //a pointer int that points to int with the and(ampersand) symbol
    int* myIntPointer = &myInteger;

    //forces pointer to be 20 and stores a 20 in myint
    *myIntPointer = 20;
    cout << "myInteger - after set via passByPointer: " << myInteger << endl;

    //passByValue
    passByValue(myInteger);
    cout << "myInteger - after set via passByPointer: " << myInteger << endl;

    //passByReference
    passByReference(myInteger);
    cout << "myInteger - after set via passByPointer: " << myInteger << endl;

    //passByPointer
    passByPointer(myIntPointer);
    cout << "myInteger - after set via passByPointer: " << myInteger << endl;
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
