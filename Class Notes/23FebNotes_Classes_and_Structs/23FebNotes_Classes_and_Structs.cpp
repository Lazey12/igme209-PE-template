// 23FebNotes_Classes_and_Structs.cpp
//
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <ctime>
//Crash code ^

#include <iostream>
#include "Player.h"

using namespace std;

void mainWrapper();

int main()
{
    srand(time(NULL));

    mainWrapper();

    //Player tmp;
    //tmp.print();


    //crash code
    if (_CrtDumpMemoryLeaks)
    {
        cout << "\n MEMORY LEAK" <<endl;
    }
    else
    {
        cout << "\n NO LEAKS" << endl;
    }
}

//a class
void mainWrapper()
{
    Player p1;
    //Player p1("Shiro" , 3); //this will have linker error because we forgot Player.cpp (Player.cpp was not defined yet)
    p1.print();

    //now it is defined then it could work
    Player p2("Lucy", 3);
    p2.print();
    //MEMORY LEAKS, even if its on the stack,because of the info we placed on the heap




    //print is just a method to print things in console,
    //it doesnt have anything to do with memory



    Player* p3ptr = new Player();
    p3ptr->print(); //this will get memory leak!

    //DO NOT DELTE TWICE, this delete twice vv
    //p3ptr->~Player(); //still memory leak.... it only clean name and score instead of the object -- never wanna do.

    delete p3ptr; //still have to use this to delete it and will cause NO leaks.
    p3ptr = nullptr;
    //IMPORTANT: DO NOT EVER CALL CONSTRUCTOR
    //p2.~Player();
}