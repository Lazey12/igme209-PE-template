// PE2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    int secondsInDecember = 31 * 24 * 60 * 60;
    std::cout << secondsInDecember << " seconds in December.\n";

    //area of a circle
    double radius = 6.2;
    double pi = 3.14159;
    double area = pi * radius * radius;
    std::cout << "The area of a circle with radius 6.2 is " << area << "\n";

    //integer division
    int x = 5;
    int y = 2;
    double result = x / y;
    std::cout << "The result of integer division of 5 by 2 is " << result;
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
