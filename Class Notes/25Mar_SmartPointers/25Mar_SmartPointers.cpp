// 25Mar_SmartPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //smart pointer is a proxy, its like a manager,
    //got data on heap not sure when it goes away and it is your job to make sure ti goes away



    //whats the build in smart pointers

    //good one
    //SmartPersonPointer smartPerson(new Person("name"));
    //smartPerson->printName();


    //weak pointers exists.. but its not really gonna count reference passing to object

    //unique and shared pointers:


    //SmartPtr.h:

    /*
    #include memory
    void uniquePTR();


    void uniquePtr()
    {
    //creates unique pointer on stack     destructor cleans vvv
        std:unique_ptr<Person> uniquePerson(new Person ("Aiden"));

        //so this line under this comment is NOT ALLOWED
        //std:unique_ptr<Person> copyUPtr = uniquePerson;
        //this doesnt work because the assignement operator (=) is overwritten so cant use it.

        //use this code for copying:
        //std:unique_ptr<Person> newOwner = std::move(uniquePerson);

        //unique pointers points to a dat on the stack AND cleans itself automatically,
        //but when the copy pointer points to the same thing, we do not know what the data belongs to and 
        //it goes out of scope and tried to delete what is ALREADY DELETED BY THE POINTER IT IS COPYING
    }
    //this doesnt cause a leak ^^^
    
    
    
    //sharedpointer:

    void sharePtr()
    {
        std::shared_ptr<Person> owner1(new Person("Aiden"));

        std::shared_ptr<Person> owner2(sharedPerson); //copy constructore

        std::shared_ptr<Person> owner3 = owner2; // using assignment to copy

    }
    
    
    
    
    
    
    */

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
