// 25Feb_ClassNotes_Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include <iostream>
using namespace std;

#include "Point.h"

void mainWrapper();

void printPoint(Point thing);

int main()
{
    mainWrapper();


    if(_CrtDumpMemoryLeaks)
    {
        cout << "Memory leak" << endl;
    }
    else
    {
        cout << "No Memory leak" << endl;
    }
}

void mainWrapper()
{
    Point p1("p1",12,24); //if it was class it will not get accessed.
    Point p2("p2", -3,-5);
    Point origin("origin",0,0);

    p1.print();
    cout << endl;

    p2.print();
    cout << endl;

    origin.print();
    cout << endl;

    //no object to call on if this was with p1.****
    Point::distance(p1,origin);

    //this doesnt run it pops a linker error, this was before print(); was defined
    //p1.x = 12;
    //p1.y = 13;
    //p1.print();

    //pass by value of classes and struct will NOT work
    //unless copy constructors!
    printPoint(origin); //this WILL crash

}

void printPoint(Point thing)
{
    thing.print();
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
