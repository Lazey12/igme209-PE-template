// 23FebNotes_Classes_and_Structs.cpp
//
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <ctime>
//Crash code ^

#include <iostream>
#include "Player.h"

using namespace std;

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



    //how is it getting called via p1.print();?
    //when stack frame gets rid of it

    Player* p3ptr = new Player();
    p3ptr->print(); //this will get memory leak!
    p3ptr->~Player(); //still memory leak.... it only clean name and score instead of the object

    delete p3ptr; //still have to use this to delete it and will cause NO leaks.

    //IMPORTANT: DO NOT EVER CALL CONSTRUCTOR
    //p2.~Player();
}