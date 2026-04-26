// Practice_PE6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "functions.h"

using namespace std;
int main()
{
    int myInteger = 10;

    cout << "Init val : " << myInteger << endl;

    int* myIntPointer = &myInteger;

    int output = 20;
    *myIntPointer = output;

    cout << "MyintPointer val : " << *myIntPointer << endl;

    passByValue(myInteger);
    cout << "passbyValue : " << myInteger << endl;

    passByReference(myIntPointer);
    cout << "passByReference : " << myInteger << endl;

    passByPointer(myIntPointer);
    cout << "passByPointer : " << myInteger << endl;
}
